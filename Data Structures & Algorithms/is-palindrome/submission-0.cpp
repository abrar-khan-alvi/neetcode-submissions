class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.size();
        string res;
        for(int i=0;i<len;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            {
                res+=tolower(s[i]);
            }
        }
        //cout<<res<<" ";
        int len1=res.size();
        for(int i=0;i<len1;i++)
        {
            if(res[i]==res[len1-i-1]) continue;
            else return false;
        }
        return true;
    }
};
