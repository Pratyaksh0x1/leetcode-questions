class Solution {
public:
int maxa=0;
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                maxa=maxa+prices[i+1]-prices[i];
            }
    
        }
        return maxa;

    }

};