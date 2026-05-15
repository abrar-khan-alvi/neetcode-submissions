class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &x:mp)
        bucket[x.second].push_back(x.first);

        vector<int>v;
        for(int i=n;i>=0;i--)
        {
            for(auto n:bucket[i]) v.push_back(n);
            if(v.size()==k) break;
        }

        return v;
    }
};
