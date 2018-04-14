class Solution {
public:
    vector<vector<int>> ans;
    vector<int> visited;
    void Comb(int n, vector<int> current, int index, int k)
    {        
        current.push_back(index);
        if(current.size() == k)
        {
            //cout<<"here";
            ans.push_back(current);
            return;
        }
        //visited[index] = 1;
        for(int i = index + 1; i <= n; i++)
        {
            //if(visited[i] == 0)
            {
                Comb(n, current, i, k);
            }
        }
        //visited[index] = 0;
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        for(int i = 1; i <= n; i++)
        {
            visited.push_back(0);
        }
        for(int i = 1; i <= n; i++)
        {
            vector<int> current;
            Comb(n, current, i, k);
        }
        return ans;
    }
};
