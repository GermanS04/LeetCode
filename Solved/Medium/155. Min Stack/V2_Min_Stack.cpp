// Min Stack
// Difficulty: Medium
// https://leetcode.com/problems/min-stack/
// Runtime: 21 ms (Beats 86.08%)
// Memory: 16.46 MB (Beats 12.07%)

class MinStack {
public:
    stack <int> st,min;
    MinStack() {
        st = {};
        min = {};
    }
    
    void push(int val) {
        if(st.empty() || val <= min.top()){
            min.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(min.top() == st.top()){
            min.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
