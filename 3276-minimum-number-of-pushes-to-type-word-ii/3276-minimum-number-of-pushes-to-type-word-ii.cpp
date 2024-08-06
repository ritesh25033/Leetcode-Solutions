class Solution {
public:
    int minimumPushes(string word) {
      unordered_map<char,int> mp;
      vector<int> ans;
     for(int i=0;i<word.size();i++){
        mp[word[i]]++;
     }
      for(auto it:mp){
        ans.push_back(it.second);
      }
      sort(ans.rbegin(),ans.rend());
      int res=1,total=0;
      for(int i=0;i<ans.size();i++){
         total+=res*ans[i];
         if((i+1)%8==0){
             res++;
         }
      }
      return total;
    }
};