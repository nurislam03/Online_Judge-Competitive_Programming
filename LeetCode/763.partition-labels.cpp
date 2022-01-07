class Solution {
public:
    vector<int> partitionLabels(string s) {
        map <char, int> lastIndex;    
        for(int i = 0; i < s.size(); i++) {
            lastIndex[s[i]] = i;
        }

        vector <int> result;
        int curr, left, right = 0, lastFinding = 0;
        for(left = 0; left < s.size(); left++) {
            curr = lastIndex[s[left]];
            if(curr < right) continue;
            
            if(left == curr) {
                result.push_back(left+1 - lastFinding);
                lastFinding = left+1;
            }
            right = curr;
        }
        
        return result;
    }
};
