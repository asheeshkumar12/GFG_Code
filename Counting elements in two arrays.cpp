class Solution{
  public:
  int upper_bound(int arr[],int n,int x){
      int l=0;
      int h=n-1;
      int ans=n;
      while(l<=h){
          int m=(l+h)/2;
          if(arr[m]>x){
              ans=m;
              h=m-1;
          }
          else{
              l=m+1;
          }
      }
      return ans;
  }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    vector<int> ans(m);
    sort(arr2,arr2+n);
    for(int i=0;i<m;i++){
        int up=upper_bound(arr2,n,arr1[i]);
        ans[i]=up;
    }
    return ans;
    }
};
