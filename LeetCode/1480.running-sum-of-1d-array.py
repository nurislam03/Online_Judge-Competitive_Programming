class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        i = 0
        cSum = 0
        Len = len(nums)
        
        while i < Len:
            cSum += nums[i]
            nums[i] = cSum
            i += 1
        return nums