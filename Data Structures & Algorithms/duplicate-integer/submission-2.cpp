class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // create hashset for seen numbers

        for (int num : nums) {
            if (seen.count(num)) { // if key exists for num
                return true; // return true
            }
            seen.insert(num); // else insert num into hash
        }
        return false; // loop finishes, no key found, no duplicates.
    }
};