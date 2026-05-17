class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> results;
        stack<int> seen;

        for (int i = temperatures.size()-1; i >= 0; i--){
            
            while (!seen.empty() && temperatures[i] >= temperatures[seen.top()]){
                seen.pop();
            }

            if (seen.empty()){
                results.push_back(0);
            }
            else{
                results.push_back(seen.top() - i);
            }
            seen.push(i);
        }
        reverse(results.begin(), results.end());
        return results;
    }
};
