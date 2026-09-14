class Solution {
public:
    int n,m;
    vector<vector<int>>vis;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    int peri=0;
    vector<pair<int,int>>neigh(pair<int,int>&node){
        vector<pair<int,int>>ans;
        for(int i=0;i<4;i++){
          int nx=node.first+dx[i];
           int ny=node.second+dy[i];
           ans.push_back({nx,ny});
        }
        return ans;
    }
    void dfs(pair<int,int>node,vector<vector<int>>&grid){
        vis[node.first][node.second]=1;
        for(auto v:neigh(node)){
           
                if(v.first<0 || v.second<0 || v.first>=n || v.second>=m|| grid[v.first][v.second]==0){
                peri++;
                }
                else if(vis[v.first][v.second]==0){
                    dfs(v,grid);
                }
            
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
         n=grid.size();
         m=grid[0].size();
         vis.assign(n,vector<int>(m,0));
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 and grid[i][j]==1){
                    dfs(make_pair(i,j),grid);
                    return peri;
                }
            }
         }
         return 17;
    }
};