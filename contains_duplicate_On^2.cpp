class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // brute force: O(n^2)
        for (int i=0; i<nums.size()-1; i++){
            for (int j=0; j<nums.size(); j++){
                if (nums[i]==nums[j] && i !=j){
                    return true;
                }
            }
        }
        return false;
    }
};
