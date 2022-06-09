class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
   int ans=INT_MAX;
       sort(a.begin(),a.end());
       for(int i=0 ;i<n ;i++){
           if( (i+m-1) >= n)
               break;
           int diff=a[i+m-1]-a[i];
           ans=min(ans,diff);
       }
       
       return ans;
   }
};
