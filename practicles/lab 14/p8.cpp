#include <iostream>
using namespace std;
void dfs(int u, int v, int adj[4][4], bool vis[]) {
    vis[u]=1; for(int i=0; i<v; i++) if(adj[u][i] && !vis[i]) dfs(i,v,adj,vis);
}
int main() {
    int adj[4][4]={{0,1,0,0},{1,0,0,0},{0,0,0,1},{0,0,1,0}}, count=0;
    bool vis[4]={0};
    for(int i=0; i<4; i++) if(!vis[i]) { count++; dfs(i, 4, adj, vis); }
    cout << "Components: " << count; return 0;
}