class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n = s.length();
        int l = 0, r = 0, maxlen = 0, maxfreq = 0;
        int hash[26] = {0};

        while (r < n)
        {
            hash[s[r] - 'A']++;
            maxfreq = max(maxfreq, hash[s[r] - 'A']);
            int len = r - l + 1;
            if ((len - maxfreq) > k)
            {
                hash[s[l] - 'A']--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};