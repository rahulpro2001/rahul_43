class MedianFinder {
    
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
public:
    
    
    MedianFinder() {}
    
    void addNum(int num) {
        maxheap.push(num);
        
        minheap.push(maxheap.top());
        maxheap.pop();
        
        if(maxheap.size()<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(maxheap.size() > minheap.size()) return maxheap.top();
        
        return (maxheap.top() + minheap.top())/2.0;
    }
};