class Solution {
public:
    int countPairs(vector<vector<int>>& c, int k) {
        map<pair<int,int>,int> mp;
        int n=c.size();
        int ans=0;
        for(int i=0 ; i<n ; i++){
            for(int val=0 ; val<=k ; val++){
                int x=val^c[i][0];    
                int y=(k-val)^c[i][1];
                ans+=mp[make_pair(x,y)];
            }
            mp[make_pair(c[i][0],c[i][1])]++;
        }
        return ans;
    }
};