class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    if(prices.size() < 2) return 0;

    int LP = 0, RP = 1;
    int profit = 0, left = prices[LP], right = prices[RP], dif = 0;

    
    while(RP < prices.size())
    {
        dif = prices[RP] - prices[LP];
        if(dif > 0)
        {
            profit += dif;
            LP = RP;   
        }
        else
        {
            LP++;
        }
        RP++;

    }

    return profit;   
    }
};