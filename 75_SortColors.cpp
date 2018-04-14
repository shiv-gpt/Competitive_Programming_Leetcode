class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = 0;
        int k = nums.size()-1;
        
        for(int i =j;i<=k;)
        {
            if(nums[i]==0)
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                j++;
                i++;
            }
            else if(nums[i]==2)
            {
                int t = nums[i];
                nums[i] = nums[k];
                nums[k] = t;
                k--;
                
            }
            else
            {   
                i++;
                //j++;
                //k--;
            }
        }
    }
};
