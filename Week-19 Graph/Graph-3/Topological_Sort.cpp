#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
  unordered_map<int,list<int>> adjList;

  void addEdge(int u, int v, bool direction){
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

  //* Topological SOrt with DFS
  void topologicalSortDFS(int src, unordered_map<int,bool> & vis, stack<int> &st){
    vis[src] = true;

    for(auto nbr:adjList[src]){
      if(!vis[nbr]){
        topologicalSortDFS(nbr, vis, st);
      }
    }
    st.push(src);

  }

  //* Topological SOrt using BFS
  void topSortBFS(int n){
    queue<int> q;
    unordered_map<int,int> indegree;
    //initialize kardi indegree sabki
    for(auto i:adjList){
      for(auto nbr:i.second){
        indegree[nbr]++;
      }
    }

    //Printing indegree
    // for(auto i:indegree){
    //   cout << i.first << "->" << i.second << endl;
    // }

    // Logic -> push all 0 indegree node into queue
    for(int node=0; node<n; node++){
      if(indegree[node] == 0){
        q.push(node);
      }
    }

    //BFS chalate hai
    while(!q.empty()){
      int frontNode = q.front();
      cout << frontNode <<"->";
      q.pop();

      for(auto nbr:adjList[frontNode]){
        indegree[nbr]--;

        //checl zero toh nhi hogayi hai
        if(indegree[nbr] == 0){
          q.push(nbr);
        }
      }
    }


  }

};


int main(){
  Graph g;
  // g.addEdge(0,1,1);
  // g.addEdge(1,2,1);
  // g.addEdge(2,3,1);
  // g.addEdge(3,4,1);
  // g.addEdge(3,5,1);
  // g.addEdge(4,6,1);
  // g.addEdge(5,6,1);
  // g.addEdge(6,7,1);

  // g.printAdjList();

  //* Topological SOrt with DFS
  // int n = 8;
  // unordered_map<int,bool> vis;
  // stack<int> st;
  // for(int node=0;node<n;node++){
  //   if(!vis[node]){
  //     g.topologicalSortDFS(node,vis,st);
  //   }
  // }

  // cout <<"Printing the topological Sort: "<<endl;

  // while(!st.empty()){
  //   cout << st.top()<<"->";
  //   st.pop();
  // }

  // g.addEdge(0,1,1);
  // g.addEdge(1,2,1);
  // g.addEdge(2,3,1);
  // g.addEdge(3,4,1);
  // g.addEdge(3,5,1);
  // g.addEdge(4,6,1);
  // g.addEdge(5,6,1);
  // g.addEdge(5,7,1);

  //Example-2
  g.addEdge(0,1,1);
  g.addEdge(1,2,1);
  g.addEdge(2,3,1);
  g.addEdge(3,4,1);
  g.addEdge(3,5,1);
  g.addEdge(4,6,1);
  g.addEdge(5,6,1);
  g.addEdge(6,7,1);
  g.printAdjList();

  g.printAdjList();

  int n = 8;
  g.topSortBFS(n);
  //Topological Sort BFS


  return 0;
}