class Solution {
public:
   
   long long nCk(int n, int k) {
    //7C3 = (7*6*5)/(3*2*1)   using this we get nCk
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
    vector<int> getRow(int r) {
        vector<int> ans;
        for(int i=0;i<=r;i++){
            ans.push_back(nCk(r,i));
        }
    return ans;
    }
};