func runningSum(nums []int) []int {
	cSum := 0
	len := len(nums)

	for i := 0; i < len; i++ {
		cSum += nums[i]
		nums[i] = cSum
	}

	return nums
}