Minimum Number of Platforms

    int
    calculateMinPatforms(int at[], int dt[], int n)
{

    sort(at, at + n);
    sort(dt, dt + n);
    int i = 0, j = 0;
    int cnt = 0, maxcnt = 0;

    while (i < n)
    {
        if (at[i] <= dt[j])
        {
            cnt = cnt + 1;
            i = i + 1;
        }
        else
        {
            cnt = cnt - 1;
            j = j + 1;
        }
        maxcnt = max(maxcnt, cnt);
    }
    return maxcnt;
}