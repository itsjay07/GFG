class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
       
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        priority_queue<pair<int, pair<int, int>>> maxHeap;

        maxHeap.push({A[0] + B[0], {0, 0}});

        vector<int> result;
        set<pair<int, int>> visited;

        while (K--) {
            auto current = maxHeap.top();
            maxHeap.pop();
            int currentMax = current.first;
            int i = current.second.first;
            int j = current.second.second;

            result.push_back(currentMax);

            if (i + 1 < N && visited.find({i + 1, j}) == visited.end()) {
                maxHeap.push({A[i + 1] + B[j], {i + 1, j}});
                visited.insert({i + 1, j});
            }
            if (j + 1 < N && visited.find({i, j + 1}) == visited.end()) {
                maxHeap.push({A[i] + B[j + 1], {i, j + 1}});
                visited.insert({i, j + 1});
            }
        }

        return result;
    }
};
