#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    vector<int> adjList[n+1];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    return 0;
}