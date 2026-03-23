// nse-->next smaller element
for (int i = n - 1; i >= 0; --i)
{
    while (!st.empty() && nums[st.top()] > nums[i])
    {
        st.pop();
    }
    if (st.empty())
        nse[i] = n;
    else
        nse[i] = st.top();

    st.push(i);
}