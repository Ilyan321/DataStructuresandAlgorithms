#include <iostream>
using namespace std;
bool isCycle(int u, int p, int v, int adj[4][4], bool vis[]) {
    vis[u] = 1;
    for(int i=0; i<v; i++) {
        if(adj[u][i]) {
            if(!vis[i]) { if(isCycle(i, u, v, adj, vis)) return 1; }
            else if(i != p) return 1;
        }
    }
    return 0;
}
int main() {
    int adj[4][4] = {{0,1,1,0},{1,0,1,0},{1,1,0,0},{0,0,0,0}};
    bool vis[4]={0}; cout << (isCycle(0, -1, 4, adj, vis) ? "Cycle" : "No Cycle");
    return 0;
}