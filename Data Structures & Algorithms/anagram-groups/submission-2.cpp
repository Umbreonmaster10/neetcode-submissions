class Solution {
public:
    string getHash(string& str){
        string hash;
        vector<int> freqs (26);
        stringstream ss;

        // get character frequencies
        for (auto it = str.begin(); it != str.end(); it++){
            freqs[int(*it) - int('a')] += 1;
        }

        // make character frequencies hashable
        for (auto it = freqs.begin(); it != freqs.end(); it++){
            ss << hex << *it;
            hash += ss.str();
        }

        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anaGroups;
        vector<vector<string>> results;

        // making anagram groups
        for (auto it = strs.begin(); it != strs.end(); it++){
            anaGroups[getHash(*it)].push_back(*it);
        }

        // formatting results
        for (auto it = anaGroups.begin(); it != anaGroups.end(); it++){
            results.push_back(it->second);
        }

        return results;
    }
};
