class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        long x = n;
        long y = n - 1;

        if ((x & y) == 0)
            return true;
        else
            return false;
    }
};
