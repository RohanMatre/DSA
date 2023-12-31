#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <vector>
#include <string>
#include <climits>
#include <set>
using namespace std;

class Graph
{
    int V;
    list<int> *l; // Declaration
public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }
    int dijkstra(int src, int dest)
    {

        // Data Structures
        vector<int> dist(V, INT_MAX);
        set<pair<int, int>> s;

        // 1.Init
        dist[src] = 0;
        s.insert({0, src});

        while (!s.empty())
        {
            auto it = s.begin();
            int node = it->second;
            int distTillNow = it->first;
            s.erase(it); // Pop

            // Iterate over the Nbrs of Node
            for (auto nbrPair : l[node])
            {
                //........

                int nbr = nbrPair.second;
                int currentEdge = nbrPair.first;

                if (distTillNow + currentEdge < dist[nbr])
                {
                    // Remove if nbr already exist in the Set
                    auto f = s.find({dist[nbr], nbr});
                    if (f != s.end())
                    {
                        s.erase(f);
                    }
                    // Insert the Update Value with the new Distance
                    dist[nbr] = distTillNow + currentEdge;
                    s.insert({dist[nbr], nbr});
                }
            }
        }
        // Single Source Shortest Dist to all Other Nodes
        for (int i = 0; i < V; i++)
        {
            cout << "Node i" << i << " Dist " << dist[i] << endl;
        }
        return dist[dest];
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 7);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 3);

    return 0;
}
