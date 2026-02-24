int countstudents(vector<int> &arr, int pages)
{ // pages=maxpages atm(barrier)
    int n = arr.size();
    int students = 1, pagesOnThatStudent = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesOnThatStudent + arr[i] <= pages)
        {
            pagesOnThatStudent += arr[i];
        }
        else
        {
            students += 1;
            pagesOnThatStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int cntStudent = countstudents(arr, mid);
        if (cntStudent > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}