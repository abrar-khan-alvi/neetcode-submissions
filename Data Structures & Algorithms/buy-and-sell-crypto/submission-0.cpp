class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int max=0;
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(max<prices[j]-prices[i] && (prices[j] - prices[i] > 0)) max=prices[j]-prices[i];
            }
        }
        return max;
    }
};
