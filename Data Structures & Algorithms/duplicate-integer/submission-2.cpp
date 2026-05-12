class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> lookup;
        for (auto it = nums.begin(); it != nums.end(); it++){

            if (lookup.count(*it) == 1){
                return true;
            }
            else{
                lookup.insert(*it);
            }
        }
        return false;
    }
};