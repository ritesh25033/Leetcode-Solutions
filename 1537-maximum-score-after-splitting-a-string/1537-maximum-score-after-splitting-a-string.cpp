class Solution {
public:
   int maxScore(string s) {
    int leftZeros = 0;
    int rightOnes = count(s.begin(), s.end(), '1'); // Count total ones in the string
    int maxScore = 0;

    // Iterate through the string, stopping before the last character
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == '0') {
            leftZeros++;
        } else {
            rightOnes--;
        }

        // Update the maximum score
        maxScore = max(maxScore, leftZeros + rightOnes);
    }

    return maxScore;
}

};