class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
         int left = 0, right = 0, max_length = 0;
         unordered_map<char, int> mp; // Map to store the last index of each character

    while (right < s.size()) {
        // If the character is already in the map and is within the current window
        if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
            left = mp[s[right]] + 1; // Move the left pointer to avoid duplicates
        }

        // Update the map with the current character's index
        mp[s[right]] = right;

        // Calculate the maximum length
        max_length = max(max_length, right - left + 1);

        // Expand the window
        right++;
    }
    
    return max_length;

    }
};