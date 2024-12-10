class Solution {
public:
    int maximumLength(string s) {
         int n = s.length();
    unordered_map<string, int> freq;
    int maxLength = -1;

    // Generate substrings
    for (int i = 0; i < n; ++i) {
        char currentChar = s[i];
        string specialSubstring = "";
        for (int j = i; j < n; ++j) {
            if (s[j] == currentChar) {
                specialSubstring += s[j];
                freq[specialSubstring]++;
                if (freq[specialSubstring] >= 3) {
                    maxLength = max(maxLength, (int)specialSubstring.length());
                }
            } else {
                break; // Stop if characters are not the same
            }
        }
    }

    return maxLength;
    }
};