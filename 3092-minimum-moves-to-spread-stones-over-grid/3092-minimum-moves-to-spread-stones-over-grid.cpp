class Solution {
public:
    int solve(vector<vector<int>>& grid){
        //We can take any value greater than 18 as ans
        int ans = 50;
        bool check = true;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i][j]==0){
                    //To check if there is any cell still having 0 value
                    check = false;
                    //To go to every cell having value greater than 1 and 
                    //check if taking value from it will minimize the no of steps
                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++){
                            if(grid[k][l]>1){
                                grid[k][l]--;
                                grid[i][j] = 1;
                                ans = min(ans, (abs(i-k)+abs(j-l)) + solve(grid));
                                //Making values same as before - Backtracking
                                grid[i][j] = 0;
                                grid[k][l]++;
                            }
                        }
                    }
                }
            }
        }
        //If no cell having value 0 is left then return 0
        if(check) return 0;
        return ans;
    }
    
    int minimumMoves(vector<vector<int>>& grid){
        return solve(grid);
    }
};