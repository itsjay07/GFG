class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int uts = 0, lts = 0;
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = i; j < n; j++)
            {
                uts += matrix[i][j];
                lts += matrix[j][i];
            }
        }
        return {uts,lts};
    }
};
