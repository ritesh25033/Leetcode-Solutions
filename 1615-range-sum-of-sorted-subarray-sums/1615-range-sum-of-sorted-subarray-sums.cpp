class Solution {
public:
    #define mod 1000000007
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarray;
        int res=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            sum+=nums[i];
            subarray.push_back(sum);
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                subarray.push_back(sum);
            }
        }
        sort(subarray.begin(),subarray.end());
        for(int i=left-1;i<=right-1;i++){
            res=((res%mod)+(subarray[i]%mod))%mod;
        }
        return res%mod;
    }
};