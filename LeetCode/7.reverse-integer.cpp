class Solution {
public:
    int reverse(int x) {
        
        if(x > 2147483647 || x <= -2147483648) return 0;
        int val = abs(x), new_val = 0;
        
        while(val > 0) {
            int last_digit = val%10;
            val = val/10;
            
            if (new_val > INT_MAX/10 || (new_val == INT_MAX / 10 && last_digit > 7)) return 0;
            if (new_val < INT_MIN/10 || (new_val == INT_MIN / 10 && last_digit < -8)) return 0;
            
            new_val = new_val*10 + last_digit;
        }
        if(x < 0) new_val *= (-1);

        return new_val;
    }
};
