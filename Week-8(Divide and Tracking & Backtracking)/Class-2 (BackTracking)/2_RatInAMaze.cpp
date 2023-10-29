#include<iostream>
#include<vector>
using namespace std;

//* Rat in a Maze

//! Function that will handle all the below Possiblities
//Possibilities
 //-> Path closed
 //-> maze ke out of bound jaa rha hu
 //check is pos is already visited or not
bool isSafe(int maze[][3], int row, int col, int srcx, int srcy, int newx, int newy, vector<vector<bool>> &visited){
  if(newx >= 0 && newx < row &&
    newy >= 0 && newy < col &&
    maze[newx][newy] == 1 && 
    visited[newx][newy] == false){
      return true;
  }
  else{
    return false;
  }
}



void printAllPath(int maze[][3], int row, int col, int srcx, int srcy, string &output, vector<vector<bool>> &visited){
  //Base Case
  // destination coordinates are [row-1][col-1]
  if(srcx == row-1 && srcy == col-1){
    cout<<output<<endl;
    return;
  }

  // Solving one Case

  //UP
  int newx = srcx-1;
  int newy = srcy;
  if(isSafe(maze,row,col, srcx, srcy, newx, newy, visited)){
    //Mark Visited
    visited[newx][newy] = true;

    //Call recrusion
    output.push_back('U');
    printAllPath(maze, row, col, newx, newy, output, visited );

    //!Bactracking(jab wapse aao position ko Unvisited Mark kr dena taki baad vali possiblities ko dikkat na ho)
    output.pop_back();
    visited[newx][newy] = false;
  }

  //Down
  newx = srcx+1;
  newy = srcy;
  if(isSafe(maze,row,col, srcx, srcy, newx, newy, visited)){
    //Mark Visited
    visited[newx][newy] = true;

    //Call recrusion
    output.push_back('D');
    printAllPath(maze, row, col, newx, newy, output, visited );

    //!Bactracking(jab wapse aao position ko Unvisited Mark kr dena taki baad vali possiblities ko dikkat na ho)
    output.pop_back();
    visited[newx][newy] = false;
  }

  //Right
  newx = srcx;
  newy = srcy+1;
  if(isSafe(maze,row,col, srcx, srcy, newx, newy, visited)){
    //Mark Visited
    visited[newx][newy] = true;

    //Call recrusion
    output.push_back('R');
    printAllPath(maze, row, col, newx, newy, output, visited );

    //!Bactracking(jab wapse aao position ko Unvisited Mark kr dena taki baad vali possiblities ko dikkat na ho)
    output.pop_back();
    visited[newx][newy] = false;
  }

  //Left
  newx = srcx;
  newy = srcy-1;
  if(isSafe(maze,row,col, srcx, srcy, newx, newy, visited)){
    //Mark Visited
    visited[newx][newy] = true;

    //Call recrusion
    output.push_back('L');
    printAllPath(maze, row, col, newx, newy, output, visited );

    //!Bactracking(jab wapse aao position ko Unvisited Mark kr dena taki baad vali possiblities ko dikkat na ho)
    output.pop_back();
    visited[newx][newy] = false;
  }

}







 
int main(){
  // int maze [4][4] = {
  //   {1,0,0,0},
  //   {1,1,0,0},
  //   {1,1,1,0},
  //   {1,1,1,1}
  // };

  int maze[3][3] = {
    {1,1,1},
    {1,0,1},
    {1,1,1}
  };

  int row = 3;
  int col = 3;
  int srcx = 0;
  int srcy = 0;
  string output = "";

  //create a visited 2-D Array
  vector<vector<bool > > visited(row, vector<bool>(col, false));

  if(maze[0][0] == 0){
    //src position is closed, That means no Path exist
    cout<< "No Path Exists" << endl;
  }
  else{
    visited[srcx][srcy] = true;
    printAllPath(maze, row, col, srcx, srcy, output, visited);
    
  }
      
 return 0;
}