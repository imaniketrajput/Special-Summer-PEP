class Solution {
  public:
    int n;
    
    bool canWePlace(vector<int> &arr, int dist, int k)
    {
        int numCows = 1; 
        int last = arr[0];
        
        for(int i=1; i<n; i++)
        {
            if(arr[i]-last >= dist)
            {
                numCows++;
                last = arr[i];
                
            }
            
            if(numCows >= k) return true;
        }
        
        return false;
    }
    
    
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        n = arr.size();
        sort(arr.begin(), arr.end());
        
        int low = 1; 
        int high = arr[n-1] - arr[0];
        
        while(low <= high)
        {
            int mid = low  + (high-low) / 2;
            
            if(canWePlace(arr, mid, k)==true)
            {
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        
        return high;
        
    }
};