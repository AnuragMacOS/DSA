8. String to Integer(atoi) class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0, n = s.length();

        while (i < n && s[i] == ' ')
            i++;         // remove space
        s = s.substr(i); // take string right after removed space
        if (n == 0)
            return 0; // if empty
        int sign = 1;
        i = 0;
        if (s[i] == '-')
        { // if first index is -
            sign = -1;
            i++;
        }
        else if (s[i] == '+')
            i++;

        int ans = 0;
        int MAX = INT_MAX, MIN = INT_MIN;

        while (i < n && isdigit(s[i]))
        { // digit hunu paryo
            int digit = s[i] - '0';
            if (ans > (MAX - digit) / 10)
            {
                if (sign == 1)
                    return MAX;
                else
                    return MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }

        return sign * ans;
    }
};