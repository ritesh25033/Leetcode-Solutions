class Solution {
public:
    string reverseWords(string s) {
        string str="",ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
            str+=s[i];
            else if(s[i]==' '){
               reverse(str.begin(),str.end());
               ans+=str;
               ans+=' ';
               str="";
            }
        }
         reverse(str.begin(),str.end());
         ans+=str;
        return ans;
    }
};