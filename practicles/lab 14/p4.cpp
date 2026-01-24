#include <iostream>
using namespace std;
void dfs(int u, int v, int adj[4][4], bool vis[]) {
    vis[u] = 1; cout << u << " ";
    for(int i=0; i<v; i++) if(adj[u][i] && !vis[i]) dfs(i, v, adj, vis);
}
int main() {
    int adj[4][4] = {{0,1,1,0},{1,0,1,0},{1,1,0,1},{0,0,1,0}};
    bool vis[4] = {0}; dfs(0, 4, adj, vis); return 0;
}