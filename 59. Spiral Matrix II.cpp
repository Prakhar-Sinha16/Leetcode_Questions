Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix II.
Memory Usage: 6.6 MB, less than 18.13% of C++ online submissions for Spiral Matrix II.

  
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> res (n,vector<int>(n));
        
        int top=0,left = 0,right = n-1,bottom = n-1;
        int value = 1;
        while(top<=bottom && left<=right and value <= n*n){
            
            
            for(int i=left;i<=right;i++){
                res[top][i] = value;
                value ++;
            }
            top++;
            
            for(int i=top;i<=bottom;i++){
                res[i][right] = value;
                value++;
            }
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    res[bottom][i] = value;
                    value++;
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res[i][left] = value;
                    value++;
                }
                left++;
            }
            
        }
        return res;
        
    }
};
