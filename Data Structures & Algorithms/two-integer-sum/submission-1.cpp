class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen;
        auto complimentIt = seen.begin();
        for (int i = 0; i < nums.size(); i++){
            complimentIt = seen.find(target - nums[i]);

            if (complimentIt != seen.end()){
                return vector<int> {complimentIt->second, i};
            }
            seen[nums[i]] = i;
        }
        // It's assumed we'll always have at least one valid pair
        return vector<int> {0,0};
    }
};
