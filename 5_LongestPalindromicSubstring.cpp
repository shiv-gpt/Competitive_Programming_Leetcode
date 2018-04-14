class Solution {
public:
    string longestPalindrome(string s) {
        
    int l = s.length();
    if(l == 1)
        return s;
    //cout<<l;
    int a[l][l];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < l; i++)
    {
        a[i][i] = 1;        
    }
    
    int maxval = 1;
    int st = 0;
    for(int n = 2; n <= l; n++)
    {
        for(int i = 0; i < (l - n + 1); i++)
        {
            //cout<<"here\n";
            int j = i + n - 1;
            if(n==2)
            {
                if(s[i] == s[j])
                {
                    a[i][j] = 1;
                    if(n > maxval)
                    {
                        maxval = n;
                        st = i;
                        //cout<<"st = "<<i<<endl;
                        //cout<<"maxval = "<<maxval<<endl;
                    }
                }
            }
            else
            {
                if(s[i] == s[j] && a[i+1][j-1])
                {
                    a[i][j] = 1;
                    if(n > maxval)
                    {
                        maxval = n;
                        st = i;
                    }
                }
            }
        }
    }
    return s.substr(st, maxval);
    }
};
