class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
     string result="";
    // result.reserve(s.length() + spaces.size()); // Pre-allocate memory for efficiency
    int spaceIndex = 0;
    int n = spaces.size();

    for (int i = 0; i < s.length(); ++i) {
        // Check if the current index matches the next space index
        if (spaceIndex < n && i == spaces[spaceIndex]) {
            result += ' '; // Add a space
            ++spaceIndex;  // Move to the next space index
        }
        result += s[i]; // Add the current character
    }

    return result;
    }
};