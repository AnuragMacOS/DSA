class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorr = 0;
        for (auto& it : nums)
            xorr ^= it;
        int rightMostBitTurnedOne = (xorr & (xorr-1)) ^ xorr;
        int b1 = 0, b2 = 0; // b1 --> 1st bit is set   ||  b2 --> 1st bit is 0
        for (auto& it : nums) {
            if (it & rightMostBitTurnedOne)
                b1 ^= it;
            else
                b2 ^= it;
        }
        return {b1, b2};
    }
};