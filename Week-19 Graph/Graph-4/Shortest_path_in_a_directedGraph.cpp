#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph {
  public:
    unordered_map<int,list<pair<int,int>>> adj;

    void addEdge(int u, int v,int wt, bool direction){
      if(direction){
        adj[u].push_back({v,wt});
      }
      else{
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
      }
    }

  void printAdjList(){
    for(auto i:adj){
      cout << i.first << ": {";
      for(auto j:i.second){
        cout <<"("<< j.first<<", "<<j.second<<"), ";
      }
      cout<<"}" << endl;
    }
  }
  
  //topological sort dfs
  void topOrderDfs(int src, stack<int> &st, unordered_map<int,bool> &vis){
    vis[src] = true;

    for(auto nbrPair:adj[src]){
      int nbrNode = nbrPair.first; 
      int nbrDist = nbrPair.second;
      if(!vis[nbrNode]){
        topOrderDfs(nbrNode, st,vis);
      }
    }

    st.push(src);
  }

  
  //Shortest path in a directed graph using topologicalSort Dfs
  void shortestPathDfs(stack<int> &st, int n){
    vector<int> dist(n,INT_MAX);

    //initially maintain source
    int src = st.top();
    st.pop();
    dist[src] = 0;

    //update nbr distance for this src node
    for(auto nbrPair:adj[src]){
      int nbrNode = nbrPair.first;
      int nbrDist = nbrPair.second;
      if(dist[src] + nbrDist < dist[nbrNode]){
        dist[nbrNode] = dist[src] + nbrDist;
      }
    }

    //apply the same above concept for all the remaining node in the topological node
    while(!st.empty()){
      int src = st.top();
      st.pop();

       for(auto nbrPair:adj[src]){
        int nbrNode = nbrPair.first;
        int nbrDist = nbrPair.second;
        if(dist[src] + nbrDist < dist[nbrNode]){
          dist[nbrNode] = dist[src] + nbrDist;
        }
     }
    }

    //ab mera distance array ekdum tyar hoga
    cout << "Printing the Distance Array: "<<endl;
    for(auto i:dist){
      cout << i << " ";
    }
  }

  //* Dijkstra Algo
  void dijkstraShortestDistance(int n, int src, int dest){
    vector<int> dist(n+1, INT_MAX);
    set<pair<int,int>> st;

    //Initial State -> (0,src)
    st.insert({0,src});
    dist[src] = 0;

    //distance updating logic
    while(!st.empty()){
      auto topElement = st.begin();
      pair <int,int> topPair = *topElement;
      int topDist = topPair.first;
      int topNode = topPair.second;
      //remove the topNode
      st.erase(st.begin());

      //update distance of nbr
      for(pair<int,int> nbrpair:adj[topNode]){
        int nbrDist = nbrpair.first;
        int nbrNode = nbrpair.second;
        if(topDist + nbrDist < dist[nbrNode]){
          //found a new shorter distance
          // now update
          //-> set ki entry
          auto previousEntry = st.find({dist[nbrNode],nbrNode});
          if(previousEntry != st.end()){
            //entry present in set
            st.erase(previousEntry);
          }
          //-> dist ka array
          dist[nbrNode] = topDist + nbrDist;
          st.insert({dist[nbrNode],nbrNode});
        }
      }
      cout << "Shortest Distance from "<<src << " Node to " << dest << " Node: "<< dist[dest] <<endl;
    }
  }


};
 
int main(){
  Graph g;
  g.addEdge(0,1,5,1);
  g.addEdge(0,2,3,1);
  g.addEdge(1,3,3,1);
  g.addEdge(2,3,5,1);
  g.addEdge(2,1,2,1);
  g.addEdge(2,4,6,1);
  g.addEdge(4,3,1,1);
      
  g.printAdjList();

  //Shortest path in a directed graph using topological sort dfs
  int src = 0;
  stack<int> st;
  unordered_map<int,bool> vis;
  g.topOrderDfs(src,st,vis);

  int n = 5;
  g.shortestPathDfs(st,n);



 return 0;
}