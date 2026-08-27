class Solution {
public:

    int helper(vector<vector<int>>&input, int m, int n,vector<vector<int>>&dp)
{    

	 if (m == 0 && n == 0)
        return input[0][0];
    
	  if (m < 0 || n < 0)
        return INT_MAX;
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
	return dp[m][n]=input[m][n] +min(helper(input,m,n-1,dp),helper(input,m-1,n,dp));
}
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
         vector<vector<int>>dp(rows,vector<int>(cols,-1));
         return helper(grid,rows-1,cols-1,dp);        
    }
};