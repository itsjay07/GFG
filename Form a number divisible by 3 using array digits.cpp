class Solution {
  public:
    int isPossible(int N, int arr[]) {
        
        long long total = accumulate(arr,arr+N,0LL);
        
        return (total %3 == 0);
    }
};