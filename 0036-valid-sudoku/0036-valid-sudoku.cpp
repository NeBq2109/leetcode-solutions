class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> elements;

    for(int i = 0 ; i < 9 ; i++)
    {
        elements.clear();
        for(int j = 0 ; j < 9 ; j++)
        {
            if (board[i][j] != '.')
            {
            auto it = elements.find(board[i][j]);

            if(it != elements.end()) return false;
            else elements.insert(board[i][j]);
            }
        }
    }

    for(int i = 0 ; i < 9 ; i++)
    {
        elements.clear();
        for(int j = 0 ; j < 9 ; j++)
        {
            if (board[j][i] != '.')
            {
            auto it = elements.find(board[j][i]);

            if(it != elements.end()) return false;
            else elements.insert(board[j][i]);
            }
        }
    }
    int tempi = 0, tempj = 0;
    while(tempi < 7 && tempj < 7)
    {
        elements.clear();
        for(int i = tempi ; i < tempi + 3 ; i++)
        {
            for(int j = tempj ; j < tempj + 3 ; j++)
            {
                if (board[i][j] != '.')
                {
                    auto it = elements.find(board[i][j]);

                    if(it != elements.end()) return false;
                    else elements.insert(board[i][j]);
                }
            }
        }

        tempi += 3;
        if (tempi > 6 && tempj < 9)
        {
            tempi = 0;
            tempj += 3;
        }
 
    }
    return true;

    }
};