class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
       
        vector<vector<int>> ans;
        
    	sort(arr.begin(), arr.end());
    	int n = arr.size();
    	int i = 0;
    	map<vector<int>, int>m;
    	
    	while (i < n - 3)
    	{
    		int begin = i + 1;
    		while (begin < n - 2)
    		{
    			int left = begin + 1;
    			int right = n - 1;
    			while (left < right)
    			{
    				if (arr[i] + arr[begin] + arr[left] + arr[right] == k)
    				{
    					if (m.find({arr[i], arr[begin] , arr[left], arr[right]}) == m.end()) 
    					{
    						ans.push_back({arr[i], arr[begin], arr[left], arr[right]});
    						m[ {arr[i], arr[begin], arr[left], arr[right]}] = 1;
    					}
    					left++;
    					right--;
    				}
    				else if (arr[i] + arr[begin] + arr[left] + arr[right] < k)
    				{
    					left++;
    				}
    				else
    				{
    					right--;
    				}
    			}
    			begin++;
    		}
    		i++;
    	}
    	return ans;
    }
};