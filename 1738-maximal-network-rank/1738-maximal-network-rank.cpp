class Solution {
public:
     int oneLevel(vector<int> adj[],int i,int j){
        int maxNetwork = 0;
        for(auto it:adj[i]){
            if(it!=j){
                maxNetwork++;
            }
        }
        for(auto it:adj[j]){
            maxNetwork++;
        }
        return maxNetwork;
    }
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> adj[n];
        for(int i= 0;i<roads.size();i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        } 
        int maxRank = 0;
        for(int i = 0;i<n;i++ ){
            for(int j = i+1;j<n;j++){
                maxRank = max(maxRank,oneLevel(adj,i,j));
            }
        }
        return maxRank;
    }
};