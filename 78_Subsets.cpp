class Solution {
public:
    vector<vector<int>> ans;
    
    void comb(vector<int> a, vector<int>& nums, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(a);
            return;
        }
        else
        {
            comb(a, nums, i+1);
            a.push_back(nums[i]);
            comb(a, nums, i+1);
            
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        comb(vector<int>{}, nums,0);
        return ans;
        
    }
};
