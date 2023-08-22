class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                ans+=(s[i]+32);
            }
            else if(s[i]>=97 && s[i]<=122){
                ans+=(s[i]);
            }
            else if(s[i]>=48 && s[i]<=57){
                ans+=(s[i]);
            }
        }
        if(ans.size()==0) return true;
        int i=0,j=ans.size()-1;
        for(;i<=j;i++,j--){
            if(ans[i]!=ans[j]) return false;
        }
        return true;
    }
};