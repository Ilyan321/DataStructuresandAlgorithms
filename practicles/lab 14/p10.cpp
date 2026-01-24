#include <iostream>
#include <queue>
using namespace std;
int main() {
    int adj[4][4]={{0,1,0,0},{1,0,1,0},{0,1,0,1},{0,0,1,0}};
    int dist[4]; for(int i=0; i<4; i++) dist[i]=-1;
    queue<int> q; dist[0]=0; q.push(0);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v=0; v<4; v++) if(adj[u][v] && dist[v]==-1){ dist[v]=dist[u]+1; q.push(v); }
    }
    cout << "Shortest dist to 3: " << dist[3]; return 0;
}
