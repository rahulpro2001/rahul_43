   //we are traversing level orede using queue in dfs we get the problem that we are getting the node like
        //       |e
        //    /b   \c
        // /d    \e
        //   \f
        //       \g   so we should have d  f  g c but humko g ki jgh e milega kyonki hum pehle left jayenge firr right traverse krenge to hume lvl mei aise krna pdega ki hum taab push krey agr mere paass curr height badi ha lvl se
        
   vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        map<int,int> mp;
        while(1)
        {
            if( q.size()==0 ) break;
            Node *temp = q.front().first;
            int lvl = q.front().second; q.pop();
            mp[lvl] = temp->data;
            if(temp->left)q.push(make_pair(temp->left,lvl-1));
            if(temp->right)q.push(make_pair(temp->right,lvl+1));
        }
        for(auto it = mp.begin();it!=mp.end();it++) ans.push_back(it->second);
        return ans;
    }

    //dfs codea