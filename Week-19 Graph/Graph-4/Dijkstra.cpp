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
        //ye adjacency list hai toh isme distance baad me hai phele ndoe store hai 
        int nbrNode = nbrpair.first;
        int nbrDist = nbrpair.second;
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
          // create a new entry in set updating the distance
          st.insert({dist[nbrNode],nbrNode});
        }
      }  
    }
     cout << "Shortest Distance from "<<src << " Node to " << dest << " Node: "<< dist[dest] <<endl;
  }


};
 
int main(){
  Graph g;
  g.addEdge(1,6,14,0);
  g.addEdge(1,3,9,0);
  g.addEdge(1,2,7,0);
  g.addEdge(2,3,10,0);
  g.addEdge(2,4,15,0);
  g.addEdge(3,4,11,0);
  g.addEdge(6,3,2,0);
  g.addEdge(6,5,9,0);
  g.addEdge(5,4,6,0);
      
  g.printAdjList();

  //Dijkstra
  int n = 6;
  int src = 6;
  int dest = 4;
  g.dijkstraShortestDistance(n,src,dest);



 return 0;
}