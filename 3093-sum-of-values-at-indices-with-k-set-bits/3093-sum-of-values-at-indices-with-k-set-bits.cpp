class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            int temp = i, count = 0;
            while(temp) {
                if(temp%2 == 1) count++;
                temp /= 2;
            }
            if(count == k) ans += nums[i];
        }
        return ans;
    }
};