bool Canweplace(vector<int> &stalls, int dist, int cows)
{
    int cntcows = 1, lastcow = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastcow >= dist)
        {
            cntcows++;
            lastcow = stalls[i];
        }
    }
    if (cntcows >= cows)
        return true;
    else
        return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 0, high = stalls[n - 1] - stalls[0];

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Canweplace(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high;
}