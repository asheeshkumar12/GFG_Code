class Solution {
  public:
   int binary_search(int arr[],int n,int x){
       int l=0,h=n-1;
       while(l<=h){
           int m=(l+h)/2;
           if(arr[m]==x){
               return m;
           }
           else if(arr[m]>x){
               h=m-1;
           }
           else{
               l=m+1;
           }
       }
       return -1;
   }
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int arrs[n];
        for(int i=0;i<n;i++){
            arrs[i]=arr[i];
        }
        sort(arrs,arrs+n);
        for(int i=0;i<n;i++){
            int bs=binary_search(arrs,n,arr[i]);
            int di=abs(bs-i);
            if(di>k){
                return "No";
            }
        }
        return "Yes";
    }
};
