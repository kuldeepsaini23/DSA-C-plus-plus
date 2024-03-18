#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> topDiagnol;
unordered_map<int,bool> bottomDiagnol;


//* N Queens
//Storing our answer
void storeSolution(vector<vector<char>> &board, vector<vector<string>> &ans){
  vector<string> tempSol;
  for(auto vec:board){
    string temp = "";
    for(auto ch:vec){
      temp.push_back(ch);
    }
    tempSol.push_back(temp);
  }
  ans.push_back(tempSol);
}

//Checking is it safe to store that queen
bool isSafe(int row, int col, vector<vector<char>> &board){
  if(rowCheck[row] == true){
    return false;
  }
  if(topDiagnol[col-row] == true){
    return false;
  }
  if(bottomDiagnol[row+col] == true){
    return false;
  }

  //place is safe to put queen
  return true;
}

void solve(vector<vector<char>> &board, vector<vector<string>> &ans, int n, int col){
  //Base Case
  if(col >= n){
    //saare column process hogaye hai now we have a solution to store
    storeSolution(board,ans);
    return;
  }

  //main logic
  //isse column ke ahr row pe queen place krke dekho
  for(int row = 0; row < n; row++){
    if(isSafe(row,col,board)){
      //queen place krdo
      board[row][col] = 'Q';
      rowCheck[row] = true;
      topDiagnol[col-row] = true;
      bottomDiagnol[col+row] = true;

      //recrusion
      solve(board, ans, n, col+1);

      //backtracking
      board[row][col] = '.';
      rowCheck[row] = false;
      topDiagnol[col-row] = false;
      bottomDiagnol[col+row] = false;
    }
  }
} 

vector<vector<string>> solveNQueens(int n) {
  vector<vector<string>> ans;
  vector<vector<char>> board(n, vector<char>(n,'.'));
  int col = 0;
  solve(board, ans, n, col);
  return ans;
}
 
 
int main(){
  int n = 4;
  vector<vector<string>> ans = solveNQueens(n);
  
  for(auto str:ans){
    for(auto ch:str){
      cout << ch << " ";
    }
    cout << endl;
  }

 return 0;
}