class Solution
{
public:
    long long solve(vector<int> &bt)
    {

        sort(bt.begin(), bt.end());
        int n = bt.size();

        long long waitTime = 0;
        long long currTime = 0;

        for (int i = 0; i < n; i++)
        {

            waitTime += currTime;
            currTime += bt[i];
        }
        return (waitTime / n);
    }
};