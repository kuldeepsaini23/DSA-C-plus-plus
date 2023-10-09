#include<iostream>
using namespace std;
 
 //* Debug the code. In this question, if there is no error, remove the bad practices.
int main(){

	int* ptr = 0; //* added nullpte and zero in declaration
	int a = 5;
	ptr = &a;
	cout << *ptr << endl;
	return 0;
      
}