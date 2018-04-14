class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int carry = 1;
        for(int i = digits.size()-1;i>=0;i--)
        {
            result.insert(result.begin(),(digits[i]+carry)%10);
            carry = (digits[i]+carry)/10;
        }
        if(carry!=0)
            result.insert(result.begin(),carry);
        return result;
    }
};
