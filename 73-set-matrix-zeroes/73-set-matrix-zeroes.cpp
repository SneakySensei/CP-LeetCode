class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(matrix[i][j] == 0)
                zeros.push_back({i,j});
            }
        }
        
        for(auto cell:zeros){
            int i = cell.first, j = cell.second;
            vector<int> temp(matrix[i].size(), 0);
            matrix[i] = temp;
            
            for(int mati = 0; mati<matrix.size(); mati++){
                for(int matj = 0; matj<matrix[mati].size(); matj++){
                    if(matj == j)
                    matrix[mati][matj] = 0;
                }
            }
        }
    }
};