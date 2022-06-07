class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftMax(height.size(), 0);
        vector<int> rightMax(height.size(), 0);
        
        leftMax[0] = height[0];
        rightMax[height.size()-1] = height[height.size()-1];
        
        for(int i = 1; i<height.size(); i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
            rightMax[height.size() - i - 1] = max(rightMax[height.size() - i], height[height.size() - i - 1]);
        }
        
        int count = 0;
        for(int i = 0; i<height.size(); i++){
            int water = min(leftMax[i],rightMax[i])-height[i];
            count += water>0 ? water : 0;
        }
        
        return count;
    }
};