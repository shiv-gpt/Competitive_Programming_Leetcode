class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1)
            return true;
       
        int maxval = 0;
       for(int i = 0; i<nums.size();i++)
       {
           if(i>maxval)
               break;
           maxval = max(i+nums[i], maxval); 
           //cout<<maxval<<endl;
       }
        if (maxval>=(nums.size()-1))
            return true;
        else return false;
        
    }
};
