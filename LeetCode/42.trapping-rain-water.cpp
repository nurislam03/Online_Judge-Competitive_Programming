class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n < 3) return 0;
        
        int leftMax = height[0];
        int rightMax = height[n-1];
        int leftPointer = 1;
        int rightPointer = n-2;
        
        int trapWater = 0;
        
        while(leftPointer <= rightPointer) {
            if(leftMax < rightMax) {
                leftMax = max(leftMax, height[leftPointer]);
                trapWater += leftMax - height[leftPointer];
                leftPointer++;
            } else {
                rightMax = max(rightMax, height[rightPointer]);
                trapWater += rightMax - height[rightPointer];
                rightPointer--;
            }
        }
        return trapWater;
    }
};