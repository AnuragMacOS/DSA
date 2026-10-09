class Solution
{
public:
  int evalRPN(vector<string> &tokens)
  {
    stack<int> st;
    for (auto it : tokens)
    {
      if (it == "+" || it == "-" || it == "/" || it == "*")
      {
        int n2 = st.top();
        st.pop();
        int n1 = st.top();
        st.pop();
        if (it == "+")
        {
          st.push(n1 + n2);
        }
        else if (it == "-")
        {
          st.push(n1 - n2);
        }
        else if (it == "/")
        {
          st.push(n1 / n2);
        }
        else if (it == "*")
        {
          st.push(n1 * n2);
        }
      }
      else
      {
        int num = stoi(it);
        st.push(num);
      }
    }
    return st.top();
  }
};
