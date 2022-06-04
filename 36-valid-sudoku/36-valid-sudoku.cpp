class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, unordered_map<char, bool>> m;
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board.size(); j++){
                if(board[i][j] == '.') continue;
                string h = "L"+to_string(i);
                string v = "V"+to_string(j);
                string s = "S"+to_string(i/3)+to_string(j/3);
                if(m[h][board[i][j]] || m[v][board[i][j]] || m[s][board[i][j]]) return false;
                m[h][board[i][j]]=true;
                m[v][board[i][j]]=true;
                m[s][board[i][j]]=true;
                    
            }
        }
        
        return true;
    }
};