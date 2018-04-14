class Solution {
public:
    int numDecodings(string s) {
        if(s.empty())
        {
            return 0;
        }
        else if(s[0] == '0')
        {
            return 0;
        }
        else if(s.length() == 1)
        {
            return 1;
        }
        int arr[s.length()] = {0};
        arr[0] = 1;
        if(s[1] != '0')
        {
            arr[1] += arr[0];
        }
        if(s[0] == '1')
        {
            arr[1] += 1;
        }
        else if(s[0] == '2' && s[1] <= '6')
        {
            arr[1] += 1;
        }
        
        for(int i = 2 ; i<s.length();i++)
        {
            if(s[i] != '0')
            {
                arr[i] += arr[i-1];
            }
            if(s[i-1] == '1')
            {
                arr[i] += arr[i-2];
            }
            else if(s[i-1] == '2' && s[i] <= '6')
            {
                arr[i] += arr[i-2];
            }
            
        }
        return arr[s.length() - 1];
    }
};
