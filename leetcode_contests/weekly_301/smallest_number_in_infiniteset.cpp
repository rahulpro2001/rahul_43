class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int> ,greater<int>> pq;
    map<int,int> mp;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++)
        {
            mp[i]++;
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int num = pq.top();pq.pop();
        mp[num]--;
        return num;
    }
    
    void addBack(int num) {
        if(mp[num]==0)
        {
            mp[num]++;pq.push(num);
        }
    }
};