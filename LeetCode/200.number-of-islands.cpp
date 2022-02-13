class Solution {
public:
    #define qq pair <int,int >
    int isVisited[302][302];
    queue <qq> q;
    
    int xx[4] = {0, -1, 0, +1};
    int yy[4] = {-1, 0, +1, 0};
    
    bool IsValid(int a, int b, int x, int y){
        return ((a < x && a >= 0 ) && (b < y && b >= 0)) ? true:false;
    }
    
    void BFS(vector<vector<char>>& grid, int x1, int y1, int x2, int y2) {    
        q = queue<qq>();
        q.push(qq(x1, y1));
        isVisited[x1][y1] = 1;
        
        while(!q.empty()) {
            qq top = q.front();
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                int fx = top.first + xx[i];
                int fy = top.second + yy[i];
                
                if(IsValid(fx, fy, x2, y2)) {
                    if(isVisited[fx][fy] == 0 && grid[fx][fy] == '1') {
                        isVisited[fx][fy] = 1;
                        q.push(qq(fx, fy));
                    }
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        for(int i = 0; i < 300; i++) for(int j = 0; j < 300; j++) isVisited[i][j] = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int k = 0; k < grid[i].size(); k++) {
                if(grid[i][k] == '1' && isVisited[i][k] == 0) {
                    island++;
                    BFS(grid, i, k, grid.size(), grid[i].size());
                } 
            }
        }
        return island;
    }
};