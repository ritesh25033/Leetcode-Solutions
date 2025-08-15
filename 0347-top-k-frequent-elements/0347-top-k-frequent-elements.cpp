class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int> freq;
      vector<int> ans;
      vector<pair<int,int>> vpp;
      for(auto it:nums){
        freq[it]++;
      }
      for(auto it:freq){
        vpp.push_back({it.second,it.first});
      }
      sort(vpp.rbegin(),vpp.rend());
       for(auto it:vpp){
        k--;
        ans.push_back(it.second);
        if(k==0)return ans;
      }
      return ans;
    }
};