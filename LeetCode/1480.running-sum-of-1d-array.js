/**
 * @param {number[]} nums
 * @return {number[]}
 */

 var runningSum = function(nums) {
    var cSum = 0;
    var len = nums.length

    for(var i = 0; i < len; i++) {
        cSum += nums[i];
        nums[i] = cSum;
    }

    return nums;
};