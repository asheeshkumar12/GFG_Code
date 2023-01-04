class Solution {
    public static int toggle(int n, int[] arr) {
        // code here
        int st=0,cur=0,mx=0,cnt=0;
        while(cur<arr.length){
            if(arr[cur]==1){
                cnt++;
                mx=Math.max(mx,cnt);
                cur++;
            }
            else{
                while(cur<arr.length && arr[cur]==0){
                    cnt++;
                    cur++;
                    mx=Math.max(mx,cnt);
                }
                st=cur;
                while(cur<arr.length && arr[cur]==1){
                    cnt++;
                    cur++;
                    mx=Math.max(mx,cnt);
                }
                cur=st;
                cnt=0;
            }
        }
    return mx;
    }
}
        
