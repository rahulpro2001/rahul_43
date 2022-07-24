class MinStack {
public:
    stack<int> st,mnst;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0){
            st.push(val);
            mnst.push(val);
        }
        else
        {
            st.push(val);
            mnst.push(min(mnst.top(),val));     
        }
    }
    
    void pop() {
        mnst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mnst.top();
    }
};