class Solution {
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        long long ans=-1;
        for(int i=0;i<k;i++)
        {
            // cout<<i<<endl;
            long long l=0,r=1e9;
            while(l+1<r)
            {
                long long mid=(l+r)>>1;
                long long costreq=0;
                for(long long j=0;j<n;j++)
                {
                    long long metalreq=composition[i][j]*mid;
                    if(stock[j]>=metalreq) continue;
                    costreq+=((metalreq-stock[j])*cost[j]);
                }
                // if(mid==5) cout<<costreq<<endl;
                if(costreq>budget) r=mid;
                else l=mid;
            }
            ans=max(ans,l);
        }
        return ans;
    }
};