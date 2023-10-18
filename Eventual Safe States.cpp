class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        
        vector<int> index;
        vector<int> check(V, 0);
        
        for (int i = 0; i < V; i++) if (dfs(adj, i, check)) index.push_back(i);
        return index;
    }

    bool dfs(vector<int> adj[], int i, vector<int> &check) 
    {
        if (check[i] == 1) return false;
        if (check[i] == 2) return true;

        check[i] = 1;
        for (int nbrs : adj[i])
        {
            int a = check[nbrs];
            if (a == 1) return false;
            if (a == 2) continue;
            if (!dfs(adj, nbrs, check)) return false;
        }
        check[i] = 2;
        return true;
    }
};
