#include<map>
class Solution {
public:
    std::map<int,string> m;
    
    vector<string> ans;
    
    void func(string s, int i, string digits)
    {      
        string sm = m[digits[i] - '0'];
        //cout<<sm;
        //cout<<"i = "<<i<<endl;
        for(int j = 0; j<sm.length();j++)
        {
            //cout<<"j ="<<j<<endl;
            //s = s + sm[j];
            string t = s+sm[j];
            if(t.length() == digits.length())
            {
                //cout<<"here";
                ans.push_back(t);
                //return;
            }
            else func(t,i+1,digits);
        }
        
        
    }
    
    vector<string> letterCombinations(string digits) 
    {
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        func("",0,digits);
        return ans;
    }
};
