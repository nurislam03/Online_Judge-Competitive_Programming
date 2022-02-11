class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int, int> mp;
        
        for(int i = 0; i < numbers.size(); i++) {
            int temp = target - numbers[i];
            
            if(mp.find(temp) == mp.end()) {
                mp[numbers[i]] = i;
            }
            else {
                return {mp[temp]+1, i+1};
            }
        }
        return {};
    }
};