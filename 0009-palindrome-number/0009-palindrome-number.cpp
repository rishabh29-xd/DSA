class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x;
        long paldigit = 0;

        while (x != 0) {
            int digit = x % 10;   // capture the digit FIRST
            x = x / 10;           // THEN shrink x
            paldigit = paldigit * 10 + digit;
        }

        return paldigit == original;   // compare to the ORIGINAL x, not the exhausted one
    }
};