class Solution
{
public:
  vector<int> finalPrices(vector<int> &nums)
  {

    int n = nums.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
      while (!st.empty() && st.top() > nums[i])
      {
        st.pop();
      }
      if (!st.empty())
      {
        ans[i] = (nums[i] - st.top());
      }
      else
      {
        ans[i] = nums[i];
      }
      st.push(nums[i]);
    }
    return ans;
  }
};
