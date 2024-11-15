class Solution {
public:
     
     bool palindrome(string str){
       int i=0,j=str.size()-1;
       while(i<=j){
        if(str[i]==str[j]){
            i++;j--;
        }
        else
        return false;
       }
       return true;
     }
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9'))
            res+=s[i];
            else if(s[i]>='A'&&s[i]<='Z')
            res+=s[i]+32;
        }
        cout<<res;
        if(palindrome(res))
        return true;
        return false;
    }
};