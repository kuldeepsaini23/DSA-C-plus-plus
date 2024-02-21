#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Unweighted
// class Graph {
//   public:
//     unordered_map<int, list<int>> adjList;
//     void addEdge(int u, int v, bool direction)  {
//       // direction -> 0 -> undirected
//       // direction -> 0 -> directed

//       if(direction == 1){
//         // u se v ki taraf ek edge hai
//         // u -> v
//         adjList[u].push_back(v);
//       }
//       else{
//         //direction = 0;
//         // u <-> v
//         // v -> u
//         adjList[u].push_back(v);
//         //v -> u
//         adjList[v].push_back(u);
//       }
//       cout << endl << "Print adjList" <<endl;
//       printAdjList();
//       cout << endl;
//     }

//     void printAdjList(){
//       for(auto i:adjList){
//         cout << i.first << "-> {";
//         for(auto neighbour: i.second){
//           cout << neighbour << ",";
//         }
//         cout << "}" << endl;
//       }

//     }
// };
 
template <typename T>

 //Weighted
class Graph{
public:
  unordered_map<T,list<pair<T,int>>> adjList;

  void addEdge(T u, T v, int wt, bool direction){
    //direction = 0-> undirected
    //direction = 1-> directed

    if(direction == 1){
      // u -> v
      adjList[u].push_back(make_pair(v,wt));
    }
    else{
       direction = 0;
        // u <-> v
        // v -> u
        adjList[u].push_back(make_pair(v,wt));
        //v -> u
        adjList[v].push_back(make_pair(u,wt));
    }
      cout << endl << "Print adjList" <<endl;
      printAdjList();
      cout << endl;
  }

      
    void printAdjList(){
      for(auto i:adjList){
        cout << i.first << "-> {";
        for(auto neighbour: i.second){
          cout << "{ " << neighbour.first << "," << neighbour.second << "}, " ;
        }
        cout<<"}" <<endl;
      }
    }


    void bfstraversal(T src, unordered_map<T,bool> &vis){
      //adjList already exist
      //visited

      //queue
      queue<T> q; 

      //initial state
      q.push(src);
      vis[src] = true;


      while(!q.empty()){
        T frontNode = q.front();
        //print
        cout << frontNode << " ";
        // pop
        q.pop();

        //go to neighbour
        for(auto nbr:adjList[frontNode]){
          T nbrData = nbr.first;

          if(!vis[nbrData]){
            q.push(nbrData);
            vis[nbrData] = true;
          }
        }
      }
    }

    void dfsTraversal(T src, unordered_map<T,bool> &vis){
      vis[src] = true;
      cout << src << " ";

      for(auto nbr:adjList[src]){
        T nbrData = nbr.first;
        if(!vis[nbrData]){
          dfsTraversal(nbrData,vis);
        }
      }
    }
};



 
int main(){
 //Creating Graph
//  Graph<int> g;
 //* Unweighted
 //Directed Grapgh
//  g.addEdge(0,1,1);
//  g.addEdge(1,2,1);
//  g.addEdge(1,3,1);
//  g.addEdge(2,3,1);

 //Undirected Grapgh
//  g.addEdge(0,1,0);
//  g.addEdge(1,2,0);
//  g.addEdge(1,3,0);
//  g.addEdge(2,3,0);

 //* Weighted
  // Directed
  // g.addEdge(0,1,5,1);
  // g.addEdge(1,2,10,1);
  // g.addEdge(1,3,20,1);
  // g.addEdge(2,3,50,1);

  // Undirected
    // g.addEdge(0,1,5,1);
  // g.addEdge(1,2,10,1);
  // g.addEdge(1,3,20,1);
  // g.addEdge(2,3,50,1);

  //Graph wth char 
  Graph<char> g;
  // g.addEdge('a','b',5,0);
  // g.addEdge('b','c',10,0);
  // g.addEdge('b','c',20,0);
  // g.addEdge('c','d',50,0);
  
  //Calling BFS

  //Disconnected graph
  // g.addEdge('a','b',5,0);
  // g.addEdge('b','c',10,0);


  // g.addEdge('d','e',20,0);


  // g.addEdge('f','f',50,0);

  //For Disconnect graph
  // unordered_map<char,bool> vis;
  // for(char node= 'a'; node <= 'f'; node++){
  //   if(!vis[node]){
  //     g.bfstraversal(node,vis);
  //   }
  // }


  //Calling DFS
  cout << "DFS"<<endl;
  unordered_map<char,bool> vis;
  //Connected
  // g.addEdge('a','b',5,0);
  // g.addEdge('a','c',10,0);
  // g.addEdge('c','d',20,0);
  // g.addEdge('c','e',50,0);
  // g.addEdge('d','e',20,0);
  // g.addEdge('e','f',50,0);

  // g.dfsTraversal('a',vis);

  char node = 'a';
  // Disconnected
  g.addEdge('a','b',5,0);
  g.addEdge('c','d',10,0);
  g.addEdge('c','g',20,0);
  g.addEdge('d','g',50,0);
  g.addEdge('e','f',50,0);

  // g.dfsTraversal(node,vis);//!--> Wrong 

  // for(char node='a'; node<='f'; node++){
  //   if(!vis[node]){
  //     g.dfsTraversal(node, vis);
  //   }
  // }

  //HW: No of Disconnected Node
  int count = 0;
  for(char node='a'; node<='f'; node++){
    if(!vis[node]){
      count++;
      g.dfsTraversal(node, vis);
    }
  }

  cout<<endl << "Number of Disconnected Graphs: "<< count<<endl;
  
 return 0;
}