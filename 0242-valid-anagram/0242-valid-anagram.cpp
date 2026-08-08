class Solution {
public:
    bool isAnagram(string s, string t) {
        int f1[26] = {0};
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = s[i];
		int idx = ch - 'a';
		f1[idx]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << f1[i] << " ";
	}

	cout << endl;

	// 2. build a freqMap for s2[]

	int f2[26] = {0};
	for (int i = 0; t[i] != '\0'; i++) {
		f2[t[i] - 'a']++;
	}


	for (int i = 0; i < 26; i++) {
		cout << f2[i] << " ";
	}

	cout << endl;

	// 3. compare the two freqMaps

	for (int i = 0; i < 26; i++) {
		if (f1[i] != f2[i]) {
			return false; // s1[] and s2[] cannot be anagrams
		}
	}

	// s1[] and s2[] are anagram
	return true;
    }
};