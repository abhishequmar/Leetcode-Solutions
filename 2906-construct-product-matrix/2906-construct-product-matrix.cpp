class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<int>v(grid.size(), 1);
        vector<vector<int>>l=grid, r=grid;
        for(int i=0;i<grid.size();i++){
            for(auto j:grid[i]){
                v[i]%=12345;
                v[i]*=j%12345;
                
            }
            
        }
        vector<int>v2=v;
        for(int i=1;i<v.size();i++){
            v[i]%=12345;
            v[i]*=v[i-1]%12345;
            
        }
        for(int i=v.size()-2;i>=0;i--){
            v2[i]%=12345;
            v2[i]*=v2[i+1]%12345;
             
        }
        
        for(int i=0;i<l.size();i++){
            for(int j=1;j<l[i].size();j++){
                l[i][j]%=12345;
                l[i][j]*=l[i][j-1]%12345;
                
            }
        }
        for(int i=0;i<l.size();i++){
            for(int j=r[i].size()-2;j>=0;j--){
                r[i][j]%=12345;
                r[i][j]*=r[i][j+1]%12345;
                
            }
        }

        for(int i=0;i<l.size();i++){
            for(int j=0;j<l[i].size();j++){
                grid[i][j]=1;
                int p=1;
                if(i>0){
                    p%=12345;
                    p*=v[i-1];
                    p%=12345;                    
                    
                }
                if(i<v.size()-1){
                    p%=12345;
                    p*=v2[i+1]%12345;
                     p%=12345;
                   // grid[i][j]%=12345;
                }
                if(j>0){
                    p%=12345;
                    p*=l[i][j-1]%12345;
                     p%=12345;
                   // grid[i][j]%=12345;
                }
                if(j<grid[i].size()-1){
                    p%=12345;
                    p*=r[i][j+1]%12345;
                     p%=12345;
                   // grid[i][j]%=12345;
                }
                p%=12345;
                grid[i][j]=p;
                              

            }
        }
        return grid;
    }
};