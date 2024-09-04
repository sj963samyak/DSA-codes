class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int count = 0;
        int m[3] = {-1, -1, -1}; // Tracks last position of 'a', 'b', 'c'
        
        for (int i = 0; i < n; i++) {
            m[s[i] - 'a'] = i; // Update the position of the character s[i]
            
            // Check if all characters have been seen at least once
            if (m[0] != -1 && m[1] != -1 && m[2] != -1) {
                // The minimum index among the last seen indices
                int minIndex = min({m[0], m[1], m[2]});
                // Number of substrings ending at i that contain all three characters
                count += (minIndex + 1);
            }
        }
        
        return count;
    }
};
