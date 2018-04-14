class Solution {
public:
    vector<string> ans;
    
    void func(string s, int open_count, int close_count, int max_count)
    {
        if(open_count==max_count && close_count==max_count)
        {
            ans.push_back(s);
            return;
        }
        if(open_count < max_count)
        {
            func(s+'(', open_count+1, close_count, max_count);
        }
        if(close_count<open_count)
        {
            func(s+')', open_count, close_count+1, max_count);
        }
    }
    
    
    vector<string> generateParenthesis(int n) {
        func("", 0,0,n);
        return ans;
        
    }
};
