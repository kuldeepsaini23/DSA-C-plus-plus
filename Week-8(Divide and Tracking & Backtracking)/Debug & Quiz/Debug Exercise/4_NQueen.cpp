#include<iostream>
using namespace std;

//* N-Queen
void print(int** board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
    }
    cout << endl;
}

bool check_position(int** board, int col, int row, int n){//* Add int n
    for(int j=0; j<n; j++){
        if(board[row][j]) return false;
    }
    for(int i=0; i<n; i++){
        if(board[i][col]) return false;
    }
    for(int i=0; i<n; i++){
        if((row+col-i)>=n || (row+col-i<0)) continue;
        if(board[i][row+col-i]) return false;
    }
    for(int i=0; i<n; i++){
        if((i-row+col)>=n || (i-row+col<0)) continue;
        if(board[i][i-row+col]) return false;
    }
    return true;
}

bool backtracing(int** board, int n, int row){
    if(row >= n){ //* Add =
        print(board,n);
        return true;
    }
    for(int j=0; j<n; j++){
        if(check_position(board,j,row,n)){
            board[row][j] = 1;
            backtracing(board, n, row+1);
            board[row][j] = 0;
        }
    }
}

void placeNQueens(int n){
    int** board = new int*[n];
    for(int i=0; i<n; i++){
        board[i] = new int[n];
        for(int j=0; j<n; j++){
            board[i][j] = 0;
        }
    }
    backtracing(board, n, 0);
}
 
int main(){
 
      
 return 0;
}