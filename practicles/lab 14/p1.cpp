#include <iostream>
using namespace std;
int main() {
    int v = 4;
    int adj[4][4] = {0};
    int edges[][2] = {{0,1}, {0,2}, {1,2}, {2,3}};
    for(int i=0; i<4; i++) adj[edges[i][0]][edges[i][1]] = adj[edges[i][1]][edges[i][0]] = 1;
    for(int i=0; i<v; i++) {
        for(int j=0; j<v; j++) cout << adj[i][j] << " ";
        cout << endl;
    }
    return 0;
}