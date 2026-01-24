#include <iostream>
#include <stack>
using namespace std;
void dfsIter(int s, int v, int adj[4][4]) {
    bool vis[4] = {0}; stack<int> st; st.push(s);
    while(!st.empty()) {
        int u = st.top(); st.pop();
        if(!vis[u]) { vis[u]=1; cout << u << " "; }
        for(int i=v-1; i>=0; i--) if(adj[u][i] && !vis[i]) st.push(i);
    }
}
int main() {
    int adj[4][4] = {{0,1,1,0},{1,0,1,0},{1,1,0,1},{0,0,1,0}};
    dfsIter(0, 4, adj); return 0;
}