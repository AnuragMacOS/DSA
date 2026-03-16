class Solution
{
public:
    bool rotateString(string s1, string s2)
    {
        if (s1.size() != s2.size())
        {
            return false;
        }
        string concat = s1 + s1;

        int index = concat.find(s2);

        if (index == -1)
        {
            return false;
        }
        return true;
    }
};