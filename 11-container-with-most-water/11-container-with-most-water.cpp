class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxSoFar = 0;
        
        int i = 0, j = height.size()-1;
        while(i<j){
            maxSoFar = max(maxSoFar, min(height[i], height[j])*(j-i) );
            
            if(height[i] < height[j]) i++;
            else j--;
            
        }
        return maxSoFar;
    }
};