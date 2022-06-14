Output Status :

Runtime: 27 ms, faster than 58.62% of C++ online submissions for Delete Operation for Two Strings.
Memory Usage: 12.2 MB, less than 49.22% of C++ online submissions for Delete Operation for Two Strings.

class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int m = word1.size();
        int n = word2.size();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        
        int res = 0;
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        res += m-dp[m][n];
        res += n-dp[m][n];
        return res;
    }
};
