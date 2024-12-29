class Solution {
public:
   int findMin(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) {
            low = mid + 1; // Minimum is in the right half... mid and right in same half
        } else {
            high = mid; // Minimum is in the left half or at mid...low and mid in same half
        }
    }
    return nums[low]; // The minimum element.
}

};