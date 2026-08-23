class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int maxpf=0;
        for(int i=0;i<prices.size();i++){
            min_price=min(prices[i],min_price);
            maxpf=max(prices[i]-min_price,maxpf);
        }
        return maxpf;
    }
};