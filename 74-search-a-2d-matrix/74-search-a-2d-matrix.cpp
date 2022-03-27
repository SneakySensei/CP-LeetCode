class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix.size() - 1;
        while(start <= end){
            int mid = (start+end)/2;
            if(binarySearch(matrix[mid], target)){
                return true;
            } else if(matrix[mid][0] > target){
                end = mid-1;
            } else if(matrix[mid][matrix[0].size()-1]<target){
                start = mid+1;
            } else 
                return false;
            cout << mid << endl;
        }
        
        
        return false;
    }
    
    bool binarySearch(vector<int>& arr, int target){
        int start = 0, end = arr.size() -1;
        while(start <= end){
            int mid = (start+end)/2;
            if(arr[mid] == target){
                return true;
            } else if (arr[mid] > target){
                end = mid-1;
            } else {
                start = mid+1;
            }
        }
        return false;
    }
};