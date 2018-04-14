class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m['I'] = 1;
        m['i'] = 1;
        m['V'] = 5;
        m['v'] = 5;
        m['X'] = 10;
        m['x'] = 10;
        m['L'] = 50;
        m['l'] = 50;
        m['C'] = 100;
        m['c'] = 100;
        m['D'] = 500;
        m['d'] = 500;
        m['M'] = 1000;
        m['m'] = 1000;
        int integer = m[s[s.length()-1]];
        int flag = 0;
        char prev = s[s.length()-1];
        for(int  i =  s.length()-2; i >= 0;i--)
        {
            //cout<<c;
            int cval = m[s[i]];
            if(cval < m[prev])
                integer = integer - cval;
            else integer = integer + cval;
            prev = s[i];
        }
        return integer;
    }
};
