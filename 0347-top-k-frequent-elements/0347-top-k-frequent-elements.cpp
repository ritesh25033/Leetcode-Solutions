class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> ans;
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.rbegin(),ans.rend());
        for(auto it:ans){
            k--;
            res.push_back(it.second);
            if(k==0)break;
        }
        return res;
    }
};