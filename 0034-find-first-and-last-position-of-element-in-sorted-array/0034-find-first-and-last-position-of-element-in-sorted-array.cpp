class Solution {
public:
     int second(vector<int>& nums, int target){
        int low=0,high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            high=mid-1;
            else if(nums[mid]<target)
            low=mid+1;
            else{
                ans=mid;
                low=mid+1;
            
            }
        }
        return ans;
     }
    
    int first(vector<int>& nums, int target){
        int low=0,high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            high=mid-1;
            else if(nums[mid]<target)
            low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1,s=-1;
         f=first(nums,target);
         s=second(nums,target);
         return {f,s};
    }
};