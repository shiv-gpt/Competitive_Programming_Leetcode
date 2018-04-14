class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int prev = nums[0];
        int count = 1;
        int j = 1;
        for(int i = 1; i<nums.size();i++)
        {
            if(nums[i]!=prev)
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                prev = t;
                count++;
                j++;
            }
        }
        return count;
    }
};
