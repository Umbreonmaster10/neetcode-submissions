class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> prefix, suffix, result;
        int runProd = 1;
        
        for (auto it = nums.begin(); it != nums.end(); it++){
            prefix.push_back(runProd);
            runProd *= *it;
        }

        runProd = 1;
        for (auto it = nums.rbegin(); it != nums.rend(); it++){
            suffix.push_back(runProd);
            runProd *= *it;
        }
        reverse(suffix.begin(), suffix.end());

        for (int i = 0; i < nums.size(); i++){
            result.push_back(prefix[i] * suffix[i]);
        }
        return result;
    }
};
