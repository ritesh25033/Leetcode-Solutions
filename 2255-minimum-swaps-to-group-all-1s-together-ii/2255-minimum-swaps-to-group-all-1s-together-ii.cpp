class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int totalOnes=count(nums.begin(),nums.end(),1);
        if(totalOnes==0)return 0;
        int i=0,j=0;
        int currentOnes=0;
        while(j<2*n){
           if(j-i+1>totalOnes){
            mx=max(mx,currentOnes);
            currentOnes-=nums[i%n];
            i++;
           }
           currentOnes+=nums[j%n];
           j++;
        }
        return totalOnes-mx;  
    }
};