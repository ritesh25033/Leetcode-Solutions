class Solution {
public:
    // time/space: O(nlogn)/O(1)
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end(), less<int>());
        sort(tasks.begin(), tasks.end(), greater<int>());
        const int n = processorTime.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                result = max(result, processorTime[i] + tasks[4 * i + j]);
            }
        }
        return result;
    }
};