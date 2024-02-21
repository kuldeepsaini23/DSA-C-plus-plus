#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
  unordered_map<int,list<int>> adjList;

  void addEdge(int u, int v, bool direction){
    //Direction -> 0 undirected
    // direction -> 1 directed 
    if(direction){
      adjList[u].push_back(v);
    }
    else{
      adjList[u].push_back(v);
      adjList[v].push_back(u);
    }
  }

  void printAdjList(){
    for(auto i:adjList){
      cout << i.first << ": {";
      for(auto j:i.second){
        cout << j <<",";
      }
      cout << "}" <<endl;
    }
  }


  //Shortest Path Using BFS
  void shortestPathBfs(int src, int dest){
    queue<int> q;
    unordered_map<int,bool> vis;
    unordered_map<int,int> parent;

    //initial state
    q.push(src);
    vis[src] = true;
    parent[src] = -1;

    while(!q.empty()){
      int frontNode = q.front();
      q.pop();

      for(auto nbr:adjList[frontNode]){
        if(!vis[nbr]){
          q.push(nbr);
          parent[nbr] = frontNode;
          vis[nbr] = true;
        }
      }
    }

    //Parent array tyar hogya yha pe
    vector<int> ans;
    while(dest != -1){
      ans.push_back(dest);
      dest = parent[dest];
    }

    //Ans reverse direction me aagya hoga reverse it
    reverse(ans.begin(), ans.end());

    //priting answer
    for(auto i:ans){
      cout << i<< " ";
    }
  }
};


int main(){

  Graph g;
  g.addEdge(0,5,0);
  g.addEdge(5,4,0);
  g.addEdge(4,3,0);
  g.addEdge(0,6,0);
  g.addEdge(6,3,0);
  g.addEdge(0,1,0);
  g.addEdge(1,2,0);
  g.addEdge(2,3,0);
  g.printAdjList();

  g.printAdjList();

  int n = 7;
  int src = 0;
  int dest = 3;

  g.shortestPathBfs(src, dest);

  return 0;
}