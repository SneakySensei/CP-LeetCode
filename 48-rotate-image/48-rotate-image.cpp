class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> temp(matrix.size(), vector<int>(matrix.size(), 0));
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                temp[j][matrix.size()-1-i] = matrix[i][j];
            }
        }
        
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                matrix[i][j] = temp[i][j];
            }
        }
    }
};