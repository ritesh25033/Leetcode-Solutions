class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        long long sum=0;
        int i=1,cnt=0;
        sort(banned.begin(),banned.end()); 
        while(i<=n){
            if(!binary_search(banned.begin(),banned.end(),i)){
                 sum+=i;
                if(sum<=maxSum)cnt++;
                else break;
            }
            i++;
        }
        return cnt;
    }
};