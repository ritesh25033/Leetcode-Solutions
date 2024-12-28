class Solution {
public:
     bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> s1_map, s2_map;

        // Populate the frequency map for s1
        for (char c : s1) {
            s1_map[c]++;
        }

        int window_size = s1.size();

        // Populate the frequency map for the first window in s2
        for (int i = 0; i < window_size; i++) {
            s2_map[s2[i]]++;
        }

        // Check if the first window matches
        if (s1_map == s2_map) return true;

        // Slide the window over s2
        for (int i = window_size; i < s2.size(); i++) {
            // Add the next character to the window
            s2_map[s2[i]]++;

            // Remove the character that is no longer in the window
            char left_char = s2[i - window_size];
            if (--s2_map[left_char] == 0) {
                s2_map.erase(left_char); // Remove the character from the map if its count is 0
            }

            // Check if the current window matches s1_map
            if (s1_map == s2_map) return true;
        }

        return false;
    }
};