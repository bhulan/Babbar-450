
pair<long long, long long> getMinMax(long long a[], int n) {
    // int c=*max_element(a,a+n);
    // int b=*min_element(a,a+n);
    // return {b,c};
    ///O(n)
    int max=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
       {
           if(a[i]>max)
               max=a[i];
           if(a[i]<min)
               min=a[i];
       }
       return {min,max};
}
