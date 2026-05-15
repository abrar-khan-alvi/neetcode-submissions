class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=0,f=0;
        for (i=0;i<n;i++)
        {
            int sum=nums[i];
            for(j=i+1;j<n;j++)
            {
                if(sum+nums[j]==target) 
                {
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
        vector<int>v;
        v.push_back(i);
        v.push_back(j);
        return v;
    }
};
