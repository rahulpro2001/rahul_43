class Solution {
public:
    bool isplndm(string s,int st,int e)
    {
        while(st<=e)
        {
            if(s[st++]!=s[e--])
                return false;
        }
        return true;
    }
    
    void func(int ind,string s,vector<string> &temp,vector<vector<string>> &ans)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(isplndm(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        func(0,s,temp,ans);
        return ans;
    }
};
/*2 
N
  possible substrings in the worst case. For each substring, it takes \mathcal{O}(N)O(N) time to generate substring and determine if it a palindrome or not. This gives us time complexity as \mathcal{O}(N \cdot 2^{N})O(N⋅2 
N
 )

*/