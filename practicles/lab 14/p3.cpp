#include <iostream>
#include <queue>
using namespace std;
void bfs(int s, int v, int adj[4][4]) {
    bool vis[4] = {0}; queue<int> q;
    vis[s] = 1; q.push(s);
    while(!q.empty()) {
        int u = q.front(); q.pop(); cout << u << " ";
        for(int i=0; i<v; i++) if(adj[u][i] && !vis[i]) { vis[i]=1; q.push(i); }
    }
}
int main() {
    int adj[4][4] = {{0,1,1,0},{1,0,1,0},{1,1,0,1},{0,0,1,0}};
    bfs(0, 4, adj); return 0;
}