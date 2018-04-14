class Solution {
public:
    vector<vector<int>> ans;
    vector<int> visited;
    void perm(vector<int>& nums, vector<int> current, int i)
    {
        
            current.push_back(nums[i]);
            /*for(int j = 0; j < current.size(); j++)
                cout<<current[j]<<" ";
            cout<<endl;*/            
            if(current.size() == nums.size())
            {
                ans.push_back(current);
                return;
            }
            visited[i] = 1;
            for(int j = 0; j < nums.size(); j++)
            {
                if(!visited[j])
                {
                    perm(nums, current, j);
                }
            }
            visited[i] = 0;
                
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            visited.push_back(0);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            vector<int> current;
            perm(nums, current, i);
        }
        return ans;
        
        
    }
};
