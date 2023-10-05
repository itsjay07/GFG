class Solution
{
  public:
    long long int substrCount (string s, int k) 
    {
    auto atMostKDistinct = [&](int k)
    {
            int i = 0, j = 0, sum = 0;
            long ans = 0;
            vector<int> charCount(26);

            while (j < s.length()) {
                if (charCount[s[j] -'a']++ == 0)sum++;

                while (sum > k) {
                    if (--charCount[s[i] -'a'] == 0)sum--;
                    i++;
                }

                ans += j-i + 1;
                j++;
            }

            return ans;
        };

        return atMostKDistinct(k) - atMostKDistinct(k - 1);
    }
};