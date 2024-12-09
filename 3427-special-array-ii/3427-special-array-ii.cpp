class Solution {
public:
  vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> special_prefix(n, 0);

    // Precompute the "specialness" of each adjacent pair
    for (int i = 0; i < n - 1; i++) {
        if ((nums[i] % 2 == 0) != (nums[i + 1] % 2 == 0)) {
            special_prefix[i] = 1;
        }
    }

    // Create a prefix sum over the special_prefix array
    vector<int> prefix_sum(n, 0);
    for (int i = 0; i < n - 1; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + special_prefix[i];
    }

    // Answer the queries
    vector<bool> ans;
    for (const auto& query : queries) {
        int from = query[0], to = query[1];
        // Check the sum of special_prefix in the range [from, to-1]
        if (to == from) {
            ans.push_back(true); // Single element is trivially special
        } else {
            int count = prefix_sum[to] - prefix_sum[from];
            ans.push_back(count == (to - from));
        }
    }

    return ans;
}
};