class Solution {
public:
    bool isAnagram(string s, string t) {
        // Time: O(nlogn + mlogm) implementation
        // Space O(1) = constant space
        
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s != t){
            return false;
        }
        return true;
    }
};
