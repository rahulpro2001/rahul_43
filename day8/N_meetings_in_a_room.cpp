 bool static cmp(pair<int,int> a,pair<int,int> b)
    {
       if(a.second == b.second ) return a.first<b.first;
       return a.second<b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        int cnt = 1;vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {v[i].first = start[i];v[i].second = end[i];}
        sort(v.begin(),v.end(),cmp);
        int dep = v[0].second;
        for(int i=1;i<n;i++)
        {
            if(v[i].first>dep) {dep = v[i].second;cnt++;}
        }
        return cnt;
    }