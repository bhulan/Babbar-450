
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int j=-1;
        int ans[n];
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                ans[++j]=arr[i];
            }
        }
         for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans[++j]=arr[i];
            }
        }
         for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
        
    }
};


