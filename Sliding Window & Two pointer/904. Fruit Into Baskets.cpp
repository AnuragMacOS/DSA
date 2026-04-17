class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> mpp;
        int l = 0, r = 0, maxlen = 0;
        int n = fruits.size();

        while (r < n)
        {
            mpp[fruits[r]]++;
            if (mpp.size() > 2)
            {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0)
                    mpp.erase(fruits[l]);
                l++;
            }
            if (mpp.size() <= 2)
            {
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
};