451. Sort Characters By Frequency

    class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        string ans = "";
        while (!pq.empty())
        {
            int n = pq.top().first; //(2,e)(1,t)(1,r)
            while (n--)
            {
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};