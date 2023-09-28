class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=0; i<n; i+=2)
        {
            if(i > 0 and arr[i] < arr[i - 1]) 
            {
                swap(arr[i] , arr[i - 1]);
            }
            
            if(i < n-1 and arr[i] < arr[i+1]){
        
                swap(arr[i] , arr[i+1]);
                
            }
            
        }
            
        
    }
};