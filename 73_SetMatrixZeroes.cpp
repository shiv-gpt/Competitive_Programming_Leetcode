class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty()) return;
        vector<int> row(matrix.size(),1);
        vector<int> cols(matrix[0].size(),1);
        for(int i = 0; i < matrix.size();i++)
        {
            for(int j =0; j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                    row[i] = cols[j] = 0;
                    //matrix[i][0] = matrix[0][j] = 0;
            }
        }
        for(int i = 0; i < matrix.size();i++)
        {
            for(int j =0; j<matrix[i].size();j++)
            {
                //if(matrix[i][0] == 0 || matrix[0][j] == 0)
                if(row[i] == 0 || cols[j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        
    }
};
