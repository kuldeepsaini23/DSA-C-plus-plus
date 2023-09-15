#include<iostream>
using namespace std;

//* Move all negative number to right
  //* Dutch National Flag Algo
void moveAllNegToLeft(int*a,int n){
  int l= 0;
  int h = n-1;
  while(l<h){
    if(a[l]<0){
      l++;
    }else if(a[h]>0){
      h--;
    }else{
      swap(a[l],a[h]);
      l++,h--;
    }
  }

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
 
int main(){
 int a[] = {1,2,-3,4-5,6};
 int n = sizeof(a)/sizeof(int);

 moveAllNegToLeft(a,n);
      
 return 0;
}