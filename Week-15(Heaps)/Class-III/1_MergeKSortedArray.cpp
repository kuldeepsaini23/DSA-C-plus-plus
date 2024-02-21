#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//* custom class to store column, row and value 
class Info{
  public:
    int data;
    int colIndex;
    int rowIndex;

    Info( int value,int rowNo, int colNo){
      this->data = value;
      this->rowIndex = rowNo;
      this->colIndex = colNo;
    }
};



class compare{
  public:
    bool operator()(Info* a, Info* b){
      return a->data > b->data;
    }
};

//* Merge K sorted Array 
void mergeKSortedArrays(int arr[][4], int n, int k, vector<int> &ans){
  priority_queue<Info*, vector<Info*> ,compare> pq;


  //1 step: process first k elements
  for (int row = 0; row < k; row++)
  {
    /* code */
    int element = arr[row][0];
    Info* temp = new Info(element,row,0);
    pq.push(temp);
  }

  while(!pq.empty()){
    Info* temp = pq.top();
    pq.pop();
    int tempData = temp->data;
    int topRow = temp->rowIndex;
    int topCol = temp->colIndex;

    // Store in ans vector
    ans.push_back(tempData);

    // next element for the same row, jisme se pop kia h just abhi usi me se insert bhi toh krna hai 
    if(topCol+1 < n){
      // iska matalb row me or element abhi present hai
      int nextElement = arr[topRow][topCol+1];
      Info* nextEle = new Info(nextElement,topRow,topCol+1);
      pq.push(nextEle);
    }
  }

}

 
int main(){
  int arr[3][4] = {
    {1,4,8,11},
    {2,3,6,10},
    {5,7,12,14}
  };     
  int n = 4;
  int k = 3;

  vector<int> ans;
  mergeKSortedArrays(arr,n,k,ans);

  cout << "Priting Ans Array: " << endl;
  for(auto i:ans){
    cout << i << " ";
  }

 return 0;
}
