class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;
    }
};


//another accepted solution 

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long cSum = 0;
        int len = nums.size();
        
        for(int i = 0; i < len; i++) {
            cSum += nums[i];
            nums[i] = cSum;
        }
        
        return nums;
    }
};