class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        if(nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        //set<int> s;
        
        /*vector<int> n;
        for(auto i : nums)
        {
            if(s.find(i) == s.end())
            {
                n.push_back(i);
                s.insert(i);
            }
        }*/
        
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(i == 0 || (i > 0 && nums[i] != nums[i-1]))
            {
                int low = i + 1;
                int high = nums.size() - 1;
                while(low < high)
                {
                    if(nums[low] + nums[high] + nums[i] == 0)
                    {
                        vector<int> v(3);
                        v[0] = nums[i];
                        v[1] = nums[low];
                        v[2] = nums[high];
                        ans.push_back(v);
                        while(low < high && nums[low] == nums[low + 1]) 
                        {
                            low++;
                        }
                        while(low < high && nums[high] == nums[high - 1]) 
                        {
                            high--;
                        }
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] + nums[i] > 0)
                    {
                        high--;
                    }
                    else
                    {
                        low++;
                    }
                }
            }
        }
        return ans;
    }
};
