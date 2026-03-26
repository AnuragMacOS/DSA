class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string ans = "";
        int n = num.length();

        for (int i = 0; i < n; i++)
        {
            while (ans.length() > 0 && k > 0 && ans.back() > num[i])
            {
                ans.pop_back();
                k--;
            }
            // trim leading zeroes
            if (ans.length() > 0 || num[i] != '0')
            {
                ans.push_back(num[i]);
            }
        }
        // if k>0 ,remove remaining digits
        while (ans.length() > 0 && k > 0)
        {
            ans.pop_back();
            k--;
        }
        // if ans is empty then all el were removed or were zeroes.
        if (ans.empty())
            return "0";

        return ans;
    }
};