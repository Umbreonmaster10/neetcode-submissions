class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;

        unordered_map<char, int> countS, countT;
        for (auto itS = s.begin(), itT = t.begin();
            itS != s.end(), itT != t.end(); itS++, itT++){

                countS[*itS]++;
                countT[*itT]++;
        }
        return (countS == countT);
    }
};
