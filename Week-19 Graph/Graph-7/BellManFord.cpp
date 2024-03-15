#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
  unordered_map<char,list<pair<int,int>>> adjList;

  void AddEdge(char u, char v, int wt, bool direction){
    //direction -> 0 -> undirected
    //direction -> 1 -> directed
    if(direction == 0){
      adjList[u].push_back({v,wt});
      adjList[v].push_back({u,wt});
    }
    else{
      adjList[u].push_back({v,wt});
    }
  }

  void printAdjList(){
    for(auto i:adjList){
      cout << i.first << "-> ";
      for(auto j:i.second){
        cout <<"{"<<j.first<<", "<<j.second<<"},";
      }
      cout << endl;
    }
  }
};
 
int main(){
  Graph g;
  g.AddEdge('A','B',-1,1);
  g.AddEdge('B','E',2,1);
  g.AddEdge('E','D',-3,1);
  g.AddEdge('D','C',5,1);
  g.AddEdge('C','A',4,1);
  g.AddEdge('B','C',3,1);
  g.AddEdge('B','D',2,1);
  g.AddEdge('D','B',1,1);

  g.printAdjList();

  return 0;
}