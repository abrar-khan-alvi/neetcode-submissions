class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            //if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++)
            {
                //if(j>i+1 && nums[j]==nums[j-1]) continue;
                for (int k=j+1;k<n;k++)
                {
                    //if(k>j+1 && nums[k]==nums[k-1]) continue;
                    if(nums[i]+nums[j]+nums[k]==0) v.insert({nums[i],nums[j],nums[k]});
                }
            }
        }
        vector<vector<int>>res;
        for(auto itr:v)
        {
            vector<int>temp;
            for(int i=0;i<itr.size();i++){
                
                temp.push_back(itr[i]);
                //cout<<itr[i]<<" ";
            }
            //cout<<endl;
           res.push_back(temp);
        }
        

        return res;
    }
};
