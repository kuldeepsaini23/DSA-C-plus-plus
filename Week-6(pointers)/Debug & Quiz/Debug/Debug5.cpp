#include <iostream>
using namespace std;

//* Debug the code. You have to make value of *q = 6.
int main(){
    int p = 5;
    int const *q = &p;
    // *q++; change this to 
    p++;
    cout << p << endl;
    // cout << *q << endl;
    return 0;
}