class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
     
        int diff = INT_MAX;
        vector<int> result(2);
        
        int left = 0, right = m - 1;

        while (left < n && right >= 0)
        {
            int sum = arr[left] + brr[right];
            if (abs(sum - x) < diff) 
            {
                result = {arr[left],brr[right]};
                diff = abs(sum - x);
            }
            if (sum > x) right--;
            else left++;
        }

        return result;

    }
};