class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.length();

        if (n != str2.length() || n < 2) 
        {
            return false;
        }

        if ((str1.substr(2) + str1.substr(0, 2)) == str2) 
        {
            return true;
        }

        if ((str1.substr(n - 2) + str1.substr(0, n - 2)) == str2) 
        {
            return true;
        }

        return false;
    }

};
