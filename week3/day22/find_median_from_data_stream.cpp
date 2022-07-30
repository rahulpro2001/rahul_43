  priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    MedianFinder() {}
    void addNum(int num) {
        // every time  push in max heap
        //  and then push max top in min heap and remove max top
        mx.push(num);
        mn.push(mx.top());
        mx.pop();
        if(mn.size()>mx.size()){mx.push(mn.top());mn.pop();}//if mn greater push in max heap top of min heap
    }
    
    double findMedian() {
        if((mn.size()+mx.size())%2)return mx.top();
        return (mx.top()+mn.top())/2.0   ;
    }