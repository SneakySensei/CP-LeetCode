class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j=height.size() - 1;
        int leftMax = height[i];
        int rightMax = height[j];
        int water = 0;
        while(i<j){
            if(leftMax<rightMax){
                i++;
                water+=leftMax-height[i] > 0 ? leftMax-height[i] : 0;
                leftMax = max(leftMax, height[i]);
            } else {
                j--;
                water+=rightMax-height[j] > 0 ? rightMax-height[j] : 0;
                rightMax = max(rightMax, height[j]);
            }
        }
        return water;
    }
};