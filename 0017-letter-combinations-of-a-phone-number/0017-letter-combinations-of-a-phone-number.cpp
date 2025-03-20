class Solution {
public:

    vector<string> rec(string &digits,int i, map<int,string> &mp){
        if(i==digits.size()){
            return {""};
        }
        vector<string> temp=rec(digits,i+1,mp);
        vector<string> ans;
        for(auto it1:mp[digits[i]-'0']){
            for(auto it2:temp){
                ans.push_back(it1+it2);
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        map<int,string> mp;
        mp[2] = "abc";
         mp[3] = "def";
          mp[4] = "ghi";
           mp[5] = "jkl";
            mp[6] = "mno";
             mp[7] = "pqrs";
              mp[8] = "tuv";
               mp[9] = "wxyz";
               if(digits.size()==0)return {};
               return rec(digits,0,mp);        
    }
};