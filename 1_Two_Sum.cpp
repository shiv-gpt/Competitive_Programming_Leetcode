class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashmap;
       for(int i = 0; i < nums.size(); i++)
       {
           int x = target - nums[i];
           if(hashmap.find(x) != hashmap.end())
           {
               vector<int> v;
               v.push_back(hashmap[x]);
               v.push_back(i);
               
               return v;
           }
           else if(hashmap.find(nums[i]) == hashmap.end())
           {
               hashmap[nums[i]] = i;
           }
       }
    }

};
