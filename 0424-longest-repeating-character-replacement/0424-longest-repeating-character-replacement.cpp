class Solution {
public:
    int characterReplacement(string s, int k) {
     int left=0,right=0,max_count=0,max_length=0;
     unordered_map<char,int> mp;
     while(right<s.size()){
       mp[s[right]]++;
       max_count=max(max_count,mp[s[right]]);
       if((right-left+1)-max_count>k){
        mp[s[left]]--;
         left++;
       }
       max_length=max(max_length,right-left+1);
       right++;
     }
     return max_length;
    }
};