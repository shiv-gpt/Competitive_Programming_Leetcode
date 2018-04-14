class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        int array[256] = {0};
        for(int i=0; i<256; i++)
        {
            array[i] = -1;
        }
        int cur_len = 0;
        int maxcount = 0;
        int previndex = -1;
        for(int i = 0; i < s.length(); i++)
        {
            previndex = array[s[i]];
            if(previndex == -1 || i - cur_len > previndex)
            {
                cur_len++;               
            }
            else
            {
                if(cur_len > maxcount)
                {
                    maxcount = cur_len;
                }
                cur_len = i - previndex;
            }
            array[s[i]] = i;
        }
        if(cur_len > maxcount)
        {
            maxcount = cur_len;
        }
        return maxcount;
    }
};
