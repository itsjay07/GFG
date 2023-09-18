class Solution {
public:
    // Function to check if a number is a power of two.
    bool isPowerofTwo(long long n) {
        // Check if n is positive and has only one set bit.
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};
