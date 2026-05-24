class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        int post=1,pre=1;
        vector<int>res;
        for(int i=0;i<len;i++)
        {
            res.push_back(pre);
            pre*=nums[i];
            
        }
        for(int i=len-1;i>-1;i--)
        {
            res[i]*=post;
            post*=nums[i];
        }
        return res;
    }
};
