#include<iostream>
using namespace std;

//* Rat in the Maze
void print(bool** visited, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << visited[i][j] << " ";
        }
    }
    cout << endl;
}
                //* Add [4]
void solve(int maze[][4], bool** visited, int row, int col, int n){
    if(row>=n || col>=n || row < 0 || col < 0) return; //* add = in row and column
    if(!(!visited[row][col] && maze[row][col])) return;
    visited[row][col] = true;
    if(row==n-1 && col == n-1){
        print(visited, n);
    }
    //Recrusion
    solve(maze,visited,row,col+1,n);
    solve(maze,visited,row,col-1,n);
    solve(maze,visited,row+1,col,n);
    solve(maze,visited,row-1,col,n);
    //Backtarcking
    visited[row][col] = false;
}

void ratInAMaze(int maze[][4], int n){//* Add no of column 
	bool** visited = new bool*[n];
    for(int i=0; i<n; i++){
        visited[i] = new bool[n];
        for(int j=0; j<n; j++){
            visited[i][j] = false;
        }
    }
    solve(maze, visited, 0, 0, n);
}
 
int main(){
    //! Wrong Input
    // int arr[4][4] = {
    //     {1, 0, 0, 0},
    //     {1, 1, 0, 0},
    //     {0, 1, 0, 0},
    //     {0, 1, 1, 1}
    // };

    // int n = 4*4;

    // ratInAMaze(arr,n);
      
 return 0;
}