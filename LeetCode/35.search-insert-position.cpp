class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size()-1;
        
        while(min <= max) {
            int mid = min + (max-min)/2;
            if (nums[mid] == target) return mid; 
            else if(nums[mid] < target) min = mid + 1;
            else max = mid - 1;
        }
        return min;
    }
};




/* Solution below also works */

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int Min = 0, Max = nums.size() -1, Mid;
        
//         while( Min <= Max ) {
//             Mid = ( Min + Max ) / 2;
            
//             if( nums[Mid] < target ) 
//                 Min = Mid + 1;
            
//             else Max = Mid - 1;
//         }
//         return Min;
//     }
// };