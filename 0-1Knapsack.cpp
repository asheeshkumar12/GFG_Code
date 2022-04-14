class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int arr[1001][1001];
    int helper(int wt[],int val[],int w,int n){
        if(w==0||n==-1){
            return 0;
        }
        if(arr[n][w]!=-1){
            return arr[n][w];
        }
        if(wt[n]>w){    // if weight value is greatre than bag capacity then move forword
            return arr[n][w]=helper(wt,val,w,n-1);
        }
        int a,b;
        a=val[n]+helper(wt,val,w-wt[n],n-1); // include item
        b=helper(wt,val,w,n-1);   // item not include
        return arr[n][w]=max(a,b);    // return the maximum profit gain
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
     arr[n][W];
     memset(arr,-1,sizeof(arr));
     return helper(wt,val,W,n-1);
    }
};
