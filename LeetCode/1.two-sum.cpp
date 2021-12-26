class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            
            if(mp.find(temp) == mp.end()) {
                mp[nums[i]] = i;
            }
            else {
                return {mp[temp], i};
            }
        }
        return {};
    }
};