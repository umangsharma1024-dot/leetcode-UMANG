class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
        return false;
    }

    int n = s.size();

    // Try all possible rotations
    for (int i = 0; i < n; i++) {

        // Rotate left by one position
        char first = s[0];
        for (int j = 0; j < n - 1; j++) {
            s[j] = s[j + 1];
        }
        s[n - 1] = first;

        // Check if it matches the goal
        if (s == goal) {
            return true;
        }
    }
    return false;
    }
};