class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),totalwater=0;
        vector<int> left(n),right(n);
        //left max till that no.
        left[0]=height[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        //right max till that no.
        right[n-1]=height[n-1];
         for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        // for(int i=0;i<n;i++){
        //     cout<<left[i]<<" ";
        // }
        //  for(int i=0;i<n;i++){
        //     cout<<right[i]<<" ";
        // }
        
        //logic to store water at that index
        for(int i=0;i<n;i++){
            totalwater+=min(left[i],right[i])-height[i];
        }
        return totalwater;

    }
};