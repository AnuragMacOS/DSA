1976. Number of Ways to Arrive at Destination

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> adj[n];

        for (auto it : roads) {
            adj[it[0]].push_back({it[1], it[2]}); // src,dest,weight
            adj[it[1]].push_back({it[0], it[2]}); // dest,src,weight
        }
        int mod = (int)(1e9 + 7);

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > pq;

        vector<long long> dist(n, LLONG_MAX);
        vector<int> ways(n, 0);
        dist[0] = 0;
        ways[0] = 1;

        pq.push({0, 0});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            long long distance = it.first;
            int node = it.second;

            for (auto iter : adj[node]) {
                int adjNode = iter.first;
                int edW = iter.second;

                if (distance + edW < dist[adjNode]) {
                    dist[adjNode] = distance + edW;
                    pq.push({distance + edW, adjNode});
                    ways[adjNode] = ways[node];
                } 
                else if (distance + edW == dist[adjNode]) {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }
        return ways[n - 1] % mod;
    }
};