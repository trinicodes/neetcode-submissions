class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> seen(26, 0);


        if (s.length() != t.length()) {
            return false;
        }
        
        for (char c : s) {
            seen[c - 'a']++;
        }

        for (char c : t) {
            seen[c - 'a']--;
            if (seen[c - 'a'] < 0) {
                return false;
            }  
        }

        return true;


    }
};
