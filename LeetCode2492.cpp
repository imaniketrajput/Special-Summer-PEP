class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        unordered_map<int, list<pair<int, int>>> adj;

        for(auto& road : roads)
        {
            int u = road[0];
            int v = road[1];
            int wt = road[2];

            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }

        int src = 1;
        int dest = n;

        vector<long long> dist(n+1, LLONG_MAX);
        dist[src] = 0;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

        pq.push({0, src});

        int mini = INT_MAX;

        while(!pq.empty())
        {
            long long topDist = pq.top().first;
            int topNode = pq.top().second;

            pq.pop();

            for(auto& nbrPair : adj[topNode])
            {
                int nbrNode = nbrPair.first;
                int nbrDist = nbrPair.second;

                mini = min(mini, nbrDist);
                if(dist[topNode]+nbrDist < dist[nbrNode])
                {
                    dist[nbrNode] = topDist + nbrDist;

                    pq.push({dist[nbrNode], nbrNode});
               }
            }
        }

        return mini;
    }
};