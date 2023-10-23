#include<iostream>
#include<vector>
using namespace std;

//* Maximal Square
 int maximalSquareHelper(vector<vector<char>>& matrix, int i, int j, int row, int col, int &maxi){
  //Base case
  if(i>= row || j>=col){
    return 0;
  }
  //explore all 3 directions
  int right = maximalSquareHelper(matrix, i, j+1, row, col, maxi);
  int diagonal = maximalSquareHelper(matrix, i+1, j+1, row, col, maxi);
  int down = maximalSquareHelper(matrix, i+1, j, row, col, maxi);
  //check can we build square from current position
  if(matrix[i][j] == '1'){
    int ans  = 1+ min(right, min(down, diagonal));
    // Ye Important hh
    maxi = max(maxi, ans);
    return ans;
  }
  else{
    //Agar 0 pr hi khade ho toh answer bhi zero hga
    return 0;
  }
}

int maximalSquare(vector<vector<char>>& matrix) {
  int i = 0;
  int j = 0;
  int row = matrix.size();
  int col = matrix[0].size();
  int maxi = 0;
  int ans = maximalSquareHelper(matrix, i, j, row, col, maxi);
  return maxi*maxi;     
}
 
int main(){
  vector<vector<char>> matrix = {
    {'1','1','1','0'},
    {'1','1','1','0'},
    {'1','1','1','0'},
    {'1','1','0','0'}
  };

  cout<<maximalSquare(matrix);
      
 return 0;
}