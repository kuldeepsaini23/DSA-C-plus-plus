#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

// Unweighted
class Graph
{
public:
  unordered_map<T, list<T>> adjList;
  void addEdge(T u, T v, bool direction)
  {
    // direction -> 0 -> undirected
    // direction -> 0 -> directed

    if (direction == 1)
    {
      // u se v ki taraf ek edge hai
      // u -> v
      adjList[u].push_back(v);
    }
    else
    {
      // direction = 0;
      //  u <-> v
      //  v -> u
      adjList[u].push_back(v);
      // v -> u
      adjList[v].push_back(u);
    }
    cout << endl
         << "Print adjList" << endl;
    printAdjList();
    cout << endl;
  }

  void printAdjList()
  {
    for (auto i : adjList)
    {
      cout << i.first << "-> {";
      for (auto neighbour : i.second)
      {
        cout << neighbour << ",";
      }
      cout << "}" << endl;
    }
  }

  bool checkCycleUndirectedBFS(int src, unordered_map<int, bool> &visi)
  {
    queue<int> q;
    ;

    unordered_map<int, int> parent;

    // initial state
    q.push(src);
    visi[src] = true;
    parent[src] = -1;

    while (!q.empty())
    {
      int frontNode = q.front();
      q.pop();

      for (auto nbr : adjList[frontNode])
      {
        if (!visi[nbr])
        {
          q.push(nbr);
          visi[nbr] = true;
          parent[nbr] = frontNode;
        }
        else if (visi[frontNode] == true && nbr != parent[frontNode])
        {
          // cycle present
          //  cout << "nbr: " << nbr << endl;
          //  cout << "frontNode: " << frontNode << endl;
          //  cout << "parent[nbr]: " << parent[nbr] << endl;
          return true;
        }
      }
    }
    // cycle not present
    return false;
  }

  bool checkCycle(int src, unordered_map<int, bool> &vis, int parent, vector<int> adj[])
  {
    vis[src] = true;

    for (auto nbr : adj[src])
    {
      if (nbr == parent)
      {
        continue;
      }
      if (!vis[nbr])
      {
        bool ans = checkCycle(nbr, vis, src, adj);
        if (ans == true)
        {
          return true;
        }
      }
      else if (vis[nbr] == 1)
      {
        return true;
      }
    }
    return false;
  }
};

int main()
{
  Graph<int> g;
  g.addEdge(0, 1, 0);
  g.addEdge(1, 2, 0);
  g.addEdge(1, 3, 0);
  g.addEdge(2, 4, 0);
  g.addEdge(3, 4, 0);
  g.addEdge(2, 3, 0);

  unordered_map<int, bool> visited;
  for (int i = 0; i < 5; i++)
  {
    if (!visited[i])
    {
      bool isCycle = g.checkCycleUndirectedBFS(0, visited);
      if (isCycle)
      {
        cout << "Cycle is Present" << endl;
        break;
      }
    }
  }

  return 0;
}

// Weighted
// class Graph{
// public:
//   unordered_map<T,list<pair<T,int>>> adjList;

//   void addEdge(T u, T v, int wt, bool direction){
//     //direction = 0-> undirected
//     //direction = 1-> directed

//     if(direction == 1){
//       // u -> v
//       adjList[u].push_back(make_pair(v,wt));
//     }
//     else{
//        direction = 0;
//         // u <-> v
//         // v -> u
//         adjList[u].push_back(make_pair(v,wt));
//         //v -> u
//         adjList[v].push_back(make_pair(u,wt));
//     }
//       cout << endl << "Print adjList" <<endl;
//       printAdjList();
//       cout << endl;
//   }

//     void printAdjList(){
//       for(auto i:adjList){
//         cout << i.first << "-> {";
//         for(auto neighbour: i.second){
//           cout << "{ " << neighbour.first << "," << neighbour.second << "}, " ;
//         }
//         cout<<"}" <<endl;
//       }
//     }

//     void bfstraversal(T src, unordered_map<T,bool> &vis){
//       //adjList already exist
//       //visited

//       //queue
//       queue<T> q;

//       //initial state
//       q.push(src);
//       vis[src] = true;

//       while(!q.empty()){
//         T frontNode = q.front();
//         //print
//         cout << frontNode << " ";
//         // pop
//         q.pop();

//         //go to neighbour
//         for(auto nbr:adjList[frontNode]){
//           T nbrData = nbr.first;

//           if(!vis[nbrData]){
//             q.push(nbrData);
//             vis[nbrData] = true;
//           }
//         }
//       }
//     }

//     void dfsTraversal(T src, unordered_map<T,bool> &vis){
//       vis[src] = true;
//       cout << src << " ";

//       for(auto nbr:adjList[src]){
//         T nbrData = nbr.first;
//         if(!vis[nbrData]){
//           dfsTraversal(nbrData,vis);
//         }
//       }
//     }
// };
