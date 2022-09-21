#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> Pair;

class Graph{
    // count of vertex and adj list(arr list) (list of list)
    // type of list depends on the types of nodes and weight
    /*
    0: (1, 7)(2, 1)(5, 3)
    1: (0, 7)(3, 11)
    2: (0, 1)(3, 3)(5, 8)
    3: (1, 11)(2, 3)(6, 1)
    4: (6, 4)(5, 6)
    5: (0, 3)(2, 8)(6, 2)(4, 6)
    6: (3, 1)(5, 2)(4, 4)
    */
    int v;
    list <Pair> *adj;
public:
    Graph(int v){
        this->v = v;
        // size of the array list is equal to node count
        adj = new list<Pair> [v];
    }

    void addEdge(int u,int v,int w){
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void printNeighbour(int chk){
        cout<<chk<<": ";
        for(auto i = adj[chk].begin(); i!=adj[chk].end();i++){
            cout<<"("<<(*i).first<<", "<<(*i).second<<")";
        }
    }

    void bfs(int source){
        vector<bool> visited(v,false);
        queue<int> q;

        visited[source] = true;
        q.push(source);

        while(!q.empty()){
            int u = q.front();
            cout<<u<<" ";
            q.pop();

            for(auto elem: adj[u]){
                int v = elem.first;
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void dfs(int source){
        static vector<bool> visited(v,false);
        queue<int> q;
        visited[source] = true;

        cout<<source<<" ";
        for(auto elem:adj[source]){
            int v = elem.first;
            if(!visited[v]) dfs(v);
        }

    }

};

int main()
{
    // V -> Node count, e -> edge count
    int V,e;
    cin>>V>>e;

    // 
    Graph g(V);
    for(int i=0;i<e;i++){
        // u->node 1, v->node2, w->weight between u and v nodes
        int u,v,w;
        cin>>u>>v>>w;

        g.addEdge(u,v,w);
    }

    for(int i=0;i<V;i++){
        cout<<endl;
        g.printNeighbour(i);
    }

    cout<<endl;
    g.bfs(0);

    cout<<endl;
    g.dfs(0);



    return 0;
}

/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
2 5 8
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8
*/
