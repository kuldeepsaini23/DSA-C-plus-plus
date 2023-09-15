#include<iostream>
using namespace std;
 
int incrementBy1ByValueCall(int k){
  k = k+1;
  return k;
}

int incrementBy1ByRefernceValue(int &k){
  k++;
  return k;
}
 
int main(){
 //! Function Call by value or Reference

//  int n = 5;//--> Nrmal Integer
//  int &k = n;//--> nick name given to n (refernce Variale)
//  int &c = n;//--> nick name given to n (refernce Variale)

//  cout<<"n: "<<n<<endl;
//  cout<<"k: "<<k<<endl;
//  cout<<"c: "<<c<<endl;

//  k++;

//  cout<<"n: "<<n<<endl;
//  cout<<"k: "<<k<<endl;
//  cout<<"c: "<<c<<endl;


  int n;
  cin>>n;
  //* Call by value
  cout<<"This call By Value"<<endl;
  cout<<"Before n: "<<n<<endl;
  // n = incrementBy1ByValueCall(n);

  incrementBy1ByValueCall(n);//--> This will not change n because it is call by value
  cout<<"After n: "<<n<<endl;
      
  //* Call by Reference
  cout<<"This call By Refernce"<<endl;
  cout<<"Before n: "<<n<<endl;
  // n = incrementBy1ByRefernceValue(n);--> ye karne ki call by refernce me jarurat hi nhi hh

  incrementBy1ByRefernceValue(n);
  cout<<"After n: "<<n<<endl;    
 return 0;
}