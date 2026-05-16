class Solution {
public:
    bool isValid(string s) {
        
        typedef pair<char, char> charPair;
        stack<char> record;
        vector<charPair> brackets {charPair('(', ')'), charPair('[', ']'), charPair('{', '}')};

        for (auto it = s.begin(); it != s.end(); it++){
            
            for (auto it2 = brackets.begin(); it2 != brackets.end(); it2++){
                // is the character an opening bracket?
                if (*it == it2->first){
                    record.push(*it);
                    break;
                }
                // is the character a closing bracket?
                else if (*it == it2->second){
                    // does its opening bracket match the stack top?
                    if (!record.empty() && it2->first == record.top()){
                        record.pop();
                        break;
                    }
                    else return false;
                }
            }
        }
        if (record.empty()) return true;
        return false;
    }
};
