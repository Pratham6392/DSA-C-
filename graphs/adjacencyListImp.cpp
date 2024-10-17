#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    std::vector<std::list<int>> adjList; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adjList.resize(V);
    }

    void addEdge(int v, int w) {
        adjList[v].push_back(w); // Add w to v’s list.
        adjList[w].push_back(v); // Add v to w’s list (for undirected graph).
    }

   void printGraph() {
        for (int v = 0; v < V; ++v) {
            cout << "\n Adjacency list of vertex " << v << "\n head ";
            for (int  x : adjList[v])
                cout << "-> " << x;
            printf("\n");
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}