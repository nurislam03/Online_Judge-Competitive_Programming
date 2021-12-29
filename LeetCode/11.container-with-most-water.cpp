class Solution {
public:
    int maxArea(vector<int>& height) {
        int MaxArea = 0;
        int a_pointer = 0;
        int b_pointer = height.size()-1;
        
        while(a_pointer < b_pointer) {
            if (height[a_pointer] < height[b_pointer]) {
                MaxArea = max(MaxArea, height[a_pointer]*(b_pointer - a_pointer));
                a_pointer++;
            }
            else {
                MaxArea = max(MaxArea, height[b_pointer]*(b_pointer - a_pointer));
                b_pointer--;
            }
        }
        return MaxArea;
    }
};