class Solution {
    public int[] runningSum(int[] nums) {
        int i = 0, cSum = 0;
        int len = nums.length;
        
        while (i < len){
            cSum += nums[i];
            nums[i] = cSum;
            i++;
        }
        
        return nums;
    }
}