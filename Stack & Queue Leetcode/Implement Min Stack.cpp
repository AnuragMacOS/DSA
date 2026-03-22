class MinStack
{
public:
    stack<long long> st;
    long long min;

    MinStack()
    {
        // 12 15 10
    }

    void push(int val)
    {
        if (st.empty())
        {
            min = val;
            st.push(val);
        }
        else
        {
            if (val > min)
            {
                st.push(val);
            }
            else
            {
                st.push((2 * (long long)val) - min); // 12 15 8
                min = val;                           // 10
            }
        }
    }

    void pop()
    {
        if (st.empty())
            return;
        long long x = st.top();
        st.pop();
        if (x < min)
        {
            min = (2 * min) - x; // 2*10-8 =12
        }
    }

    int top()
    {
        if (st.empty())
            return -1;
        long long x = st.top();
        if (min < x)
        { // means, it was not modified
            return (int)x;
        }
        else
            return (int)min; // cuz it was modified
    }

    int getMin() { return (int)min; }
};