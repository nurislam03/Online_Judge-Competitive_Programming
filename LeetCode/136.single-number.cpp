class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            res = res ^ nums[i];
        }
        return res;
    }
};