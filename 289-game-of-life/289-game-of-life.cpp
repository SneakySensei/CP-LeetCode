class Solution {
private:
    int getNeighbors(vector<vector<int>>& board, int i, int j){
        int count = 0;
        for(int ni = i-1; ni<=i+1; ni++){
            for(int nj = j-1; nj<=j+1; nj++){
                if(ni==i && nj==j) continue;
                if(ni == -1 || ni == board.size()) continue;
                if(nj == -1 || nj == board[ni].size()) continue;
                if(board[ni][nj] == 1)
                    count ++;
            }
        }
        return count;
    }
    
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> nBoard = board;
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                int neighbors = getNeighbors(board, i, j);
                if(board[i][j] == 1){
                    if(neighbors < 2 || neighbors > 3){
                      nBoard[i][j] = 0;  
                    }
                } else if(neighbors == 3){
                    nBoard[i][j] = 1;
                }
            }
        }
        
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                board[i][j] = nBoard[i][j];
            }
        }
        
        
    }
};