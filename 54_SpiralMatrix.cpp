class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         
        if (matrix.empty()) return {};
        
        vector<int> result;
        // return result;
        int u = 0, d = matrix.size()-1, r = matrix[0].size()-1, l = 0;
        //vector<int> result;
        while(1)
        {
            for(int i = l; i <= r;i++)
            {
                result.push_back(matrix[u][i]);
            }
            u++;
            if(u>d)
                break;
            for(int i = u; i <= d;i++)
            {
                result.push_back(matrix[i][r]);
            }
            r--;
            if(r<l)
                break;
            for(int i = r; i >= l;i--)
            {
                result.push_back(matrix[d][i]);
            }
            d--;
            if(d<u)
                break;
            for(int i = d; i >= u;i--)
            {
                result.push_back(matrix[i][l]);
            }
            l++;
            if(l>r)
                break;
        }
        return result;
        
    }
};
