#include<iostream>
#include<vector>
using namespace std;

//* Sudoku Solver

//Checking is Safe
bool isSafe(int row,int col,char value, vector<vector<char>> &board){
  int n = board.size();

  // same row me vo number na ho  
  for(int i =0; i<n; i++){
    if(board[row][i] == value){
      return false;
    }
  }

  // same column me vo number na ho
  for(int i =0; i<n; i++){
    if(board[i][col] == value){
      return false;
    }
  }

  //same 3X3 matrix/grid me vo number na ho
  //! Yhi pe glti hoti hai
  for(int i=0; i<n;i++){
    int rowIndex = 3*(row/3) + i/3;
    int colIndex = 3*(col/3) + i%3;
    if(board[rowIndex][colIndex] == value){
      return false;
    }
  }


  return true;
}

bool solveHelper(vector<vector<char>>& board){
 int n = board.size();

  for(int i=0; i<n; i++){
    for(int j =0; j < n; j++){
      //empty cell check karo
      if(board[i][j] == '.'){
        //try karege 1->9 insert krna ka

        for(char ch = '1' ; ch <= '9'; ch++){
          if(isSafe(i,j,ch,board)){
            //pllace krdo
            board[i][j] = ch;
            //recrusion
            bool recrusionKaAns = solveHelper(board);
            if(recrusionKaAns == true){
              return true;
            }
            else{
              //recrusion answer nhi laa paya iska mtlb jo ch aapne insert kiya vo glt tha iska mtlb backtrack krdo
              board[i][j] = '.';
            }
          }
        }

        return false;
      }
    }
  }

  return true;
}

void solveSudoku(vector<vector<char>>& board) {
  solveHelper(board);
}
 
int main(){
 vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
  //Calling Aur function  
  solveSudoku(board);
 for(auto vec:board){
  for(auto ch:vec){
    cout << ch <<" ";
  }
  cout << endl;
 }
      
 return 0;
}