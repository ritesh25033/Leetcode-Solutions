class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=INT_MIN;
        for(int i=0;i<piles.size();i++){
            mx=max(mx,piles[i]);
        }
        long long low=1,high=mx,result = mx;;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++){
               if(piles[i]%mid==0){
                sum+=(piles[i]/mid);
               }else{
                sum+=(piles[i]/mid)+1;
               }
            }
            // if(sum==h){
            //     return mid;
            // }else if(sum>h){
            //     low=mid+1;
            // }else{
            //     high=mid-1;
            // }
            if (sum <= h) {
            result = mid;  // Update result to the current mid.
            high = mid - 1; // Try to find a smaller k.
            } else {
            low = mid + 1;  // Increase k to reduce sum.
           }
        }
        return result;
    }
};