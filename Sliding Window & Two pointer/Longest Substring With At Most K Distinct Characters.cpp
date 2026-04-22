int kDistinctChars(int k, string &str)
{
    unordered_map<char, int> mpp;
    int maxlen = 0, r = 0, l = 0;
    int n = str.size();

    while (r < n)
    {
        mpp[str[r]]++;
        if (mpp.size() > k)
        {
            mpp[str[l]]--;
            if (mpp[str[l]] == 0)
            {
                mpp.erase(str[l]);
            }
            l++;
        }
        if (mpp.size() <= k)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;
}