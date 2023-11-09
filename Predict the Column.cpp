class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        int ans = -1;
        int x = 0;
        
        for(int i = 0; i<N; i++)
        {
            int zero = 0;
            for(int j = 0; j < N; j++)
            {
                if (arr[j][i] == 0) zero++;
            }
            if (zero > x) ans = i;
            x = max(x, zero);
        }
        
        return ans;
        
    }
};