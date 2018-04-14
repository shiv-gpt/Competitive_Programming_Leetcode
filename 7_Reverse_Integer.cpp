class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        bool neg_flag = false;
        if(x<0)
        {            
            x = -1*x;
            neg_flag = true;
        }
        while(x)
        {
            if (INT_MAX / 10 < rev || (INT_MAX - x % 10) < rev * 10) {
                return 0;
            }
            rev = 10*rev + x%10;
            x = x/10;
        }
        if(neg_flag)
            rev = -1*rev;
        return rev;
    }
};
