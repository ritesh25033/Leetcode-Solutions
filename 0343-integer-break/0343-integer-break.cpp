class Solution {
public:
int t[59];
  int solve(int n){
      int res=0;
      if(t[n]!=-1) return t[n];
      for(int i=1;i<n;i++){
          int product =i*max(n-i,solve(n-i));
          res=max(res,product);
      }
      return t[n]= res;
  }
    int integerBreak(int n) {
        memset(t,-1,sizeof(t));
      return solve(n)  ;
    }
};