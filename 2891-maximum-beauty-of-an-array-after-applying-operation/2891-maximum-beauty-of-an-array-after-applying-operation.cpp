class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        // Create a vector of ranges for each number in nums
    vector<pair<int, int>> ranges;
    for (int num : nums) {
        ranges.emplace_back(num - k, num + k);
    }

    // Sort the ranges by their start values
    sort(ranges.begin(), ranges.end());

    // Sliding window to find the maximum overlap
    int max_beauty = 0;
    priority_queue<int, vector<int>, greater<int>> min_heap; // Min-heap to store end points of current overlapping ranges

    for (const auto& range : ranges) {
        int start = range.first;
        int end = range.second;

        // Remove ranges that are no longer overlapping
        while (!min_heap.empty() && min_heap.top() < start) {
            min_heap.pop();
        }

        // Add the current range's endpoint
        min_heap.push(end);

        // Update the maximum beauty
        max_beauty = max(max_beauty, (int)min_heap.size());
    }

    return max_beauty;
    }
};