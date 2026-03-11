class Solution
{
public:
    bool checkValidString(string s)
    {
        int max = 0, min = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                min = min + 1;
                max = max + 1;
            }
            else if (s[i] == ')')
            {
                min = min - 1;
                max = max - 1;
            }
            else
            {
                min = min - 1; // For min: We want the lowest count possible,so we pretend * is')'.Count goes down
                max = max + 1; // For max: We want the highest count possible,so we pretend * is'(' Count goes up
            }
            if (min < 0)
                min = 0; // Logic: Physically, you cannot have -1 open brackets.

            if (max < 0)
                return false; // max assumes every * helped us by becoming a '('
            // If max is still negative,it means we have way too many ) brackets.so return false
        }
        return (min == 0); // if 0 gives true or else false.
    }
};