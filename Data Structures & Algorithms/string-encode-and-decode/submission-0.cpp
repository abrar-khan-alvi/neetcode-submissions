class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for (int i=0;i<strs.size();i++)
        {
            //int len=strs[i].length();
            res += to_string(strs[i].length()) + '#' + strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
            vector<string>res;
            int i=0;

            while(i< s.length())
            {
                int pos=s.find('#', i);
                int len = stoi(s.substr(i, pos - i));
                res.push_back(s.substr(pos + 1, len)); 
                i = pos + 1 + len;    
            }
        return res;


    }
};
