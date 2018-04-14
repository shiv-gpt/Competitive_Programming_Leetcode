class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int arr[m][n];
        memset(arr,0,sizeof(arr));
        //arr[0][0] = 1;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i==0&&j==0)
                {
                    arr[0][0] = grid[0][0];
                }
                else if(i==0)
                {
                    arr[i][j] = arr[i][j-1] + grid[i][j];
                }
                else if(j==0)
                {
                    arr[i][j] = arr[i-1][j] + grid[i][j];
                }
                else
                {
                    arr[i][j] = min(arr[i][j-1], arr[i-1][j]) + grid[i][j];
                }
                
            }
        }
        return arr[m-1][n-1];
    }
};
