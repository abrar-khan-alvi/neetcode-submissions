class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());

            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>vtr;
        for(auto &x:mp)
        {
            vtr.push_back(x.second);
        }

        return vtr;
    }
};
