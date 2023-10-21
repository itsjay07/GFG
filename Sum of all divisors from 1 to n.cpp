class Solution
{
public:
    long long sumOfDivisors(int N)
    {
       long long total = 0;
       
        for(int i=1; i<=N; i++)
        {
            total = total + i*(N/i);
        }
        return total;
    }
};