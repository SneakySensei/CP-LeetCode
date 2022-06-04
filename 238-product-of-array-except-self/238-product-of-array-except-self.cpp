class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> prodsFromLeft(nums.size(), 0);
//         vector<int> prodsFromRight(nums.size(), 0);
        
//         int prodSoFar = 1;
//         for(int i = 0; i<nums.size(); i++){
//             prodSoFar*=nums[i];
//             prodsFromLeft[i] = prodSoFar;
//         }
        
//         prodSoFar = 1;
//         for(int i = nums.size()-1; i>=0; i--){
//             prodSoFar*=nums[i];
//             prodsFromRight[i] = prodSoFar;
//         }
        
//         vector<int> res;
//         for(int i = 0; i<nums.size(); i++){
//             if(i==0) res.push_back(prodsFromRight[i+1]);
//             else if(i==nums.size()-1) res.push_back(prodsFromLeft[i-1]);
//             else res.push_back(prodsFromRight[i+1]*prodsFromLeft[i-1]);
//         }
        
//         return res;
        
//         O(n) time and O(1) space solution
        vector<int> res(nums.size(), 1);
        int leftProd = 1, rightProd = 1;
        
        for(int i = 0, j=nums.size()-1; i<nums.size(); i++, j--){
            leftProd*=nums[i];
            rightProd*=nums[j];
            
            if(i<nums.size()-1) res[i+1] *= leftProd;
            if(j>0) res[j-1] *= rightProd;
        }
        
        return res;
    }
};