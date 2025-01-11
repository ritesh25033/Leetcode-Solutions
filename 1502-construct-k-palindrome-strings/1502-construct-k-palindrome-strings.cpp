class Solution {
public:
    bool canConstruct(string s, int k) {
        map<char,int> mp;
        int cnt=0;
        if(s.size()<k)return false;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second%2!=0)cnt++;
        }
        if(cnt>k)return false;
        return true;
    }
};