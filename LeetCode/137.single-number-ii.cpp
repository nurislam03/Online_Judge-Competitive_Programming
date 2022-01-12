class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==2) mp.erase(nums[i]);
            else mp[nums[i]]++;
        }
        return mp.begin()->first;
    }
};


//Alternative

// class Solution {
// public:
//     map <int, int> count;
//     int singleNumber(vector<int>& nums) {
//         int len = nums.size(), res;
//         count.clear();
    
//         for (int i = 0; i < len; i++) {
//             int val = nums[i];
//             count[val]++;
//             if(count[val] == 3) count.erase(val);
//         }
        
//         map<int, int>::iterator itr;
//         itr = count.begin();
//         res = itr->first;
        
//         return res;
//     }
// };