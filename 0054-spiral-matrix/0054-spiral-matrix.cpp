class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int r=matrix.size();
         int c=matrix[0].size();
         vector<int> arr;
        int count=0;
        int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
        while(count<r*c){
            for(int i=col_start;i<=col_end && count<r*c;i++){
                arr.push_back(matrix[row_start][i]);
                count++;
            }
            row_start++;
             for(int i=row_start;i<=row_end && count<r*c;i++){
                arr.push_back(matrix[i][col_end]);
                count++;
            }
            col_end--;
             for(int i=col_end;i>=col_start && count<r*c;i--){
                arr.push_back(matrix[row_end][i]);
                count++;
            }
            row_end--;
             for(int i=row_end;i>=row_start && count<r*c;i--){
                arr.push_back(matrix[i][col_start]);
                count++;
            }
            col_start++;
        }
        return arr;
    }
};