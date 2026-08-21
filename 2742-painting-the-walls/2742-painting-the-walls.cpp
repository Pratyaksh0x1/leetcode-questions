class Solution {
public:
int knap(vector<int> &cost, vector<int>& time, int i,
             int n, vector<vector<int>>& dp) {
    if (n<= 0) {
        return 0;
    }
     if (i == dp.size()) {
            return 1e9;
        }
    if (dp[i][n] != -1) {
        return dp[i][n];
    }
    int take = cost[i] + knap(cost, time,i+1, n- time[i]-1, dp);
    
    int nottake = knap(cost,time, i+1,n,dp);

    return dp[i][n] = min(take, nottake);
}


    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return knap(cost, time, 0, n, dp);
    }
};