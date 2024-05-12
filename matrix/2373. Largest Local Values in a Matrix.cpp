class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int maxi=INT_MIN;
        int n=grid.size();
        // int c=0;
        vector<vector<int>>res(n-2,vector<int>(n-2));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int cRows=i+3;
                int cCol=j+3;
                if(cCol<=n && cRows<=n){
                    for(int k=i;k<cRows;k++){
                        for(int m=j;m<cCol;m++){
                            maxi=max(maxi,grid[k][m]);
                        }
                    }
                    res[i][j]=maxi;
                     maxi=INT_MIN;
                }
            
            }
            
           
            // c=0;
        }
        return res;
    }
};