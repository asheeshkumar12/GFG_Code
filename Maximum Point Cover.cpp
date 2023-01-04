class Solution {
  public:
    int maximumpoints(vector<vector<int> > arr, int n, int x, int y) {
        vector<vector<int>>dpp(1005,vector<int>(1005,0));
        int mx1=0,mx2=0;
        for(int i=0;i<arr.size();i++){
            int a=arr[i][0],b=arr[i][1];
            mx1=max(mx1,a);
            mx2=max(mx2,b);

            dpp[a+1][b+1]++;
            
        }

       mx1=max(mx1,x);
       mx2=max(mx2,y);
        for(int i=1;i<=mx1+4;i++){
            for(int j=1;j<=mx2+4;j++){
                dpp[i][j]+=(dpp[i-1][j]+dpp[i][j-1]-dpp[i-1][j-1]);
               
                
                
            }
            
        }
        int ansp=0;
        for(int i=x+1;i<=mx1+4;i++){
            for(int j=y+1;j<=mx2+4;j++){
                
                    int p=dpp[i][j]+dpp[i-x-1][j-y-1]-dpp[i-x-1][j]-dpp[i][j-y-1];
                ansp=max(ansp,p);
                    
                
                
                
                
            }
        }
        return ansp;
    
    }
};
