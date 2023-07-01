// Adjacency List Representation - BFS Code - DFS Code - Kahn's Algo.(Modified BFS)
#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <vector>
#include <string>

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
    void printAdjList()
    {
        // Iterate Over the rows
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            // Every element of ith Linked List
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }
/*    
    // BFS Code
    void bfs(int source)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};

        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            // Do Some Work for every node
            int f = q.front();
            cout << f << ",";
            q.pop();

            // Push the nbrs of Current Node inside q if they are not visited
            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }

    // DFS Code
    void dfsHelper(int Node, bool *visited)
    {
        visited[Node] = true;
        cout << Node << ",";
        // Make a dfs Call on All its unvisited neighbours
        for (int nbr : l[Node])
        {
            if (!visited[nbr])
            {
                dfsHelper(nbr, visited);
            }
        }
        return;
    }
    void dfs(int source)
    {
        bool *visited = new bool[V]{0};
        dfsHelper(source, visited);
    }
*/
    // Topological Ordering using BFS Code
    void topological_sort()
    {
        vector<int> indegree(V, 0);

        // Iterate Over all the Edges to find the Right Indegree
        for (int i = 0; i < V; i++)
        {
            for (auto nbr : l[i])
                {
                    indegree[nbr]++;
                }
        }
        // BFS
        queue<int> q;
        // initiate the q with Nodes Having 0 indegree
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        // Start Poping
        while (!q.empty())
        {
            int Node = q.front();
            cout << Node << " ";
            q.pop();

            // Iterate over the Nbrs of this Node Reduce their indegree by 1.
            for (auto nbr : l[Node])
            {
                indegree[nbr]--;
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};

int main()
{
    /*Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);

    // g.printAdjList();
    g.bfs(1);
    cout << endl;
    g.dfs(1);
    cout << endl;
    */
    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(1, 2);

    g.topological_sort();
    return 0;
}
