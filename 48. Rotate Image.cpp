class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //cout<<matrix[0][1];
        for(int i = 0; i < matrix.size()/2; i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[matrix.size()-i-1][j];
                matrix[matrix.size()-i-1][j] = temp;
            }
        }
        int c =1;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = c; j < matrix[i].size(); j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
            c++;
        }
    }
};
