#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>" ">>m;
    int adjMatrix[n+1][n+1];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    
}