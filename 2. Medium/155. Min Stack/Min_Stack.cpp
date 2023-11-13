// Min Stack
// Difficulty: Medium
// https://leetcode.com/problems/min-stack/
// Runtime: 2247 ms (Beats 5.00%)
// Memory: 17.14 MB (Beats 6.41%)

class MinStack {
public:
    vector <int> vec;
    vector <int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        min = vec;
        sort(min.begin(), min.end());
        return min[0];
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