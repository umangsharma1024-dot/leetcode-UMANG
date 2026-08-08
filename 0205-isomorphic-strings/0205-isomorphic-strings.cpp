class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.size() != t.size()) {
            return false;
    }

    char mapST[256] = {0}; // Maps characters from s to t
    char mapTS[256] = {0}; // Maps characters from t to s

    for (int i = 0; i < s.size(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        // If neither character has been mapped yet
        if (mapST[c1] == 0 && mapTS[c2] == 0) {
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }
        // Otherwise, check if the existing mapping is consistent
        else if (mapST[c1] != c2 || mapTS[c2] != c1) {
           return false;
            
        }
    }
       return true;
    }
};