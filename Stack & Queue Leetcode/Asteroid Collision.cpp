class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> st;
        int n = asteroids.size();

        for (int i = 0; i < n; ++i)
        {
            if (asteroids[i] > 0)
            {
                st.push_back(asteroids[i]);
            }
            else
            { // the moment we get asteroids[i]<0
                while (!st.empty() && st.back() > 0 && st.back() < abs(asteroids[i]))
                {
                    st.pop_back();
                }
                if (!st.empty() && st.back() == abs(asteroids[i]))
                {
                    st.pop_back();
                }
                else if (st.empty() || st.back() < 0)
                { // st has -ve ele
                    st.push_back(asteroids[i]);
                }
            }
        }
        return st;
    }
};