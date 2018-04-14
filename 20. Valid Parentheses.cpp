class Solution {
public:
    bool isopen(char c)
    {
        if(c == '[' || c == '{' || c == '(')
            return true;
        else return false;
    }
    bool isValid(string s) {
        stack<char> st;
        if(s.length()%2!=0 || !isopen(s[0]) || isopen(s[s.length()-1]))
            return false;
        map<char, char> m;
        m['{'] = '}';
        m['('] = ')';
        m['['] = ']';
        bool flag = true;
        int i = 0;
        while(i<s.length())
        {
            if(isopen(s[i]))
            {
                st.push(s[i]);
            }
            else
            {
                char c = st.top();
                if(m[c] == s[i])
                {
                    st.pop();
                }
                else return false;
            }
            i++;
            
        }
        return true;
    }
};
