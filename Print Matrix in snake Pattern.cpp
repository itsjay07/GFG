class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
     static vector<int> snakePattern(vector<vector<int>>& mat)
     {
        int x = mat.size();
        
        vector<int> index;

        for (int i = 0; i < x; i++) 
        {
            for (int j = 0; j < x; j++) 
            {
                if ((i & 1) == 0) index.push_back(mat[i][j]);
                
                else index.push_back(mat[i][x - 1 - j]);
            }
        }
        return index;
    }
};