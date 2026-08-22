class Solution {
public:
    bool checkDivisibility(int n) {
        int digit, sum = 0, mul = 1, p = n;
        while (n != 0) {
            digit = n % 10;
            sum += digit;
            mul *= digit;
            n = n / 10;
        }
        if (p % (sum + mul) == 0)
            return true;
        return false;
    }
};
