class Solution {
public:
   int minGroupsForValidAssignment(vector<int>& nums) { 
     
      unordered_map<int,int> mp;
    for(int i = 0 ; i < nums.size();i++)
        mp[nums[i]]++;
    
    int maxi=0;
        int n = nums.size(); 

    map<int,int>u; 
    for(auto i: nums){ 
        u[i]++; 
        maxi = max(maxi, u[i]); 
    } 
     
     
    for(int i=maxi; i>=1; i--){ 
        if(posi(i,u)){ 
             
            int res = 0; 
            for(auto j: u){ 
                int curr = j.first; 
                int c = j.second; 

                int left = c%i; 
                
                res = res + (c/i); 
                if(left > 0)res++; 
            } 
            return res; 
        } 
    } 
    return -1; 
} 

bool posi(int x, map<int,int>&u){ 
     
    for(auto i: u){ 
        int curr = i.first; 
        int cnt = i.second; 
         
        int left = cnt%x; 
        int tt = cnt/x; 
         
        if(left < x-1){ 
            int req = (x-1)-left; 
            if(tt >= req)left = x-1; 
        } 
         
        if(left > 0 && left < x-1)return false; 
    } 
    return true; 
} 
};