class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // through Hash Map: O(n)
        // slightly richer than Hash Set
        unordered_map<int, int> seen;
        for (int i=0; i<nums.size(); i++){
            if (seen[nums[i]] >= 1){
                return true;
            }
            seen[nums[i]]++;
        }
        return false;
    }
};
