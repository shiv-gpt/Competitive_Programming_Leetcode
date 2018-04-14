class Solution {
public:
    bool checkrows(vector<vector<char>>& board)
    {
        bool used[10][10] = {false};
        for(int i = 0; i < 9 ; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j]!='.')
                {
                    if(used[i][board[i][j]-'0'])
                        return false;
                    else used[i][board[i][j]-'0'] = true;
                }
            }
        }
        return true;
    }
    
    bool checkcols(vector<vector<char>>& board)
    {
        bool used[10][10] = {false};
        for(int i = 0; i < 9 ; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j]!='.')
                {
                    if(used[board[i][j]-'0'][j])
                        return false;
                    else used[board[i][j]-'0'][j] = true;
                }
            }
        }
        return true;
    }
    
    bool check(vector<vector<char>>& board)
    {
        bool used1[9][9] = {false};
        bool used2[9][9] = {false};
        bool used3[9][9] = {false};
        for(int i = 0; i < 9 ; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j]!='.')
                {
                    if(used1[i/3*3+j/3][board[i][j]-'0'-1] || used2[j][board[i][j]-'0'-1] || used3[i][board[i][j]-'0'-1])
                        return false;
                    else used1[i/3*3+j/3][board[i][j]-'0'-1] = used2[j][board[i][j]-'0'-1] = used3[i][board[i][j]-'0'-1] = true;
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        if(check(board))
            return true;
        else return false;
        
    }
};
