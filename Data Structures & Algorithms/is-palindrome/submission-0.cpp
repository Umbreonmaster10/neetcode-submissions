class Solution {
public:
    bool isPalindrome(string s) {
        auto left = s.begin(), right = s.end()-1;
        while (!isalnum(*left)) left++;
        while (!isalnum(*right)) right--;

        while (left < right){
            cout << *left << " " << *right << endl;
            if (tolower(*left) != tolower(*right)) return false;
            left++;
            right--;
        
            while (!isalnum(*left)) left++;
            while (!isalnum(*right)) right--;
        }
        return true;
    }
};
