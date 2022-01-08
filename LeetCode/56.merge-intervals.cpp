class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>result;
        
        int count = 0, start = intervals[0][0], end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++) {
            if(end >= intervals[i][0]) {
                end = max(end, intervals[i][1]);
            }
            else {
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                result.push_back(temp);
                
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        result.push_back(vector<int>{start, end});
        
        return result;
    }
};