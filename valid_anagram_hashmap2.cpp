class Solution {
public:
    bool isAnagram(string s, string t) {
        // Time: O(n+m)
	// Space: O(n)
	unordered_map<char,int> seen;
        if (s.length() != t.length()){
            return false;
        }
        for (int i=0; i<s.length(); i++){
            seen[s[i]]++;
            seen[t[i]]--;
        }
        for (int j=0; j<t.length(); j++){
            if(seen[s[j]]!= 0){
                return false;
            }
        }
        return true;
    }
};
