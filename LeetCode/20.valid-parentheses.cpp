class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        map <char, char> Map;
        
        Map['('] = ')';
        Map['{'] = '}';
        Map['['] = ']';
        
        stk.push(s[0]);
        
        for(int i = 1; i < s.size(); i++) {
            if(!stk.empty() && Map[stk.top()] == s[i]) stk.pop();
            else stk.push(s[i]);
        }
        
        if(stk.empty()) return true;
        return false;
    }
};