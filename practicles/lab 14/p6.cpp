#include <iostream>
#include <queue>
using namespace std;
void findPath(int s, int d, int v, int adj[4][4]) {
    int parent[4]; for(int i=0; i<4; i++) parent[i]=-1;
    bool vis[4]={0}; queue<int> q; vis[s]=1; q.push(s);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0; i<v; i++) if(adj[u][i] && !vis[i]){ vis[i]=1; parent[i]=u; q.push(i); }
    }
    int curr=d; while(curr!=-1){ cout<<curr<<"<-"; curr=parent[curr]; }
}
int main() {
    int adj[4][4] = {{0,1,0,0},{1,0,1,0},{0,1,0,1},{0,0,1,0}};
    findPath(0, 3, 4, adj); return 0;
}