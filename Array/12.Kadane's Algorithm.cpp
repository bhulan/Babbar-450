 public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long curr=0;
       long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            curr=curr+arr[i];
            maxi=max(curr,maxi);
            if(curr<0)
            curr=0;
        }
        return maxi;
        
    }
