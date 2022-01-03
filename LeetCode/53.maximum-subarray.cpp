

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0], cur = nums[0];
        
        
        for(int i = 1 ; i < n ; i++){
            cur = max(nums[i], cur + nums[i]);
            res = max(res, cur);
        }
        
        return res;
    }
};

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int len = nums.size();
//         int maxContSum = nums[0];
//         int window = nums[0];
        
//         for(int i = 1; i < len; i++) {
//             if(window + nums[i] >= 0) {
//                 if(nums[i] >= (window + nums[i])) {
//                     window = nums[i];
//                     maxContSum = max(maxContSum, window);
//                 }
//                 else {
//                     window += nums[i];
//                     maxContSum = max(maxContSum, window);
//                 }
//             }
//             else {
//                 window = nums[i];
//                 maxContSum = max(maxContSum, window);
//             }
//         }
//         return maxContSum;
//     }
// };