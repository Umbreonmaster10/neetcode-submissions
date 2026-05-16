class MinStack {
public:
    vector<int> minstack;
    int minIdx, topIdx;

    MinStack() {
        topIdx = -1;
        minIdx = 0;
    }
    
    void push(int val) {
        minstack.push_back(val);
        topIdx++;
        if (val < minstack[minIdx]) minIdx = topIdx;
    }
    
    void pop() {
        if (!minstack.empty()){
            minstack.pop_back();

            if (!minstack.empty() && minIdx == topIdx){
                // get new minIdx in worst case scenario
                minIdx = 0;
                for (int i = 1; i < minstack.size(); i++){
                    if  (minstack[i] < minstack[minIdx]) minIdx = i;
                }
            }
            topIdx--;
        }
    }
    
    int top() {
        if (!minstack.empty()) return minstack[topIdx];
        return -1;
    }
    
    int getMin() {
        if (!minstack.empty()) return minstack[minIdx];
        return -1;
    }
};
