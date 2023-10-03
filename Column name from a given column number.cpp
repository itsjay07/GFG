class Solution
{
    public:
    
    string colName (long long int n)
    {
         string ans = " ";
         
        while(n-- > 0)
        {
            ans +='A'+ n%26;
            n = n/26;
        }
        
        reverse(ans.begin() , ans.end());
        
        return ans;
    }
};