class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
      vector<vector<int>> index;
      
        for (int i = 0; i < N; i++) 
        {
            vector<int> checked(N, 0);
            
            dfs(i, graph, checked, N);
            index.push_back(checked);
        }
        return index;
    }

    static void dfs(int i, vector<vector<int>>& graph, vector<int>& checked, int N) 
    {
        checked[i] = 1;
        for (int j = 0; j < N; j++) 
        {
            if (graph[i][j] == 1 && checked[j] == 0) 
            {
                dfs(j, graph, checked, N);
            }
        }  
    }
};