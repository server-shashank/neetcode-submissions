class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> unique_count;

        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (unique_count.find(*i) != unique_count.end()) {
                return true;
            }

            unique_count.insert(*i);
        }

        return false;
    }
};