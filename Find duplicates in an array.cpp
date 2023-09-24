class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
       vector<int>ans;
       
        int range[n] = {0};
        
        for(int i=0;i<n;i++){
            range[arr[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(range[i] > 1) {
                ans.push_back(i);
            }
        }
        
        if(ans.empty()) {
            ans.push_back(-1);
        }
 
        return ans; 
    }
};
