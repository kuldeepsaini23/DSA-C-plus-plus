#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//* Debuginh segmented sieve

void fillPrimes(vector<int>& prime, int high)
{
    vector<bool> ck(high+1, true);
    ck[0] = ck[1] = false; //* Added this
    for (int i = 2; (i * i) <= high; i++) {
        if (ck[i] == true) {
            for (int j = i * i; j <= sqrt(high); j = j + i) {
                ck[j] = false;
            }
        }
    }
    for (int i = 2; i * i <= high; i++) {
        if (ck[i] == true) {
            prime.push_back(i);
        }
    }

    for (int  i = 0; i < prime.size(); i++)
    {
      /* code */
      cout<<prime[i]<<" ";
    }
    cout<<endl;
}

void segmentedSieve(int low, int high)
{
    if (low<2 and high>=2){
        low = 2;
    }
    vector<bool> prime(high-low+1, true);
    vector<int> chprime;
    fillPrimes(chprime, high);
    for (int i : chprime) {
        int lower = (low / i); 
        if (lower <= 1) {
            lower = i + i;
        }
        else if (low % i) {
            lower = (lower * i) + i;
        }
        else {
            lower = (lower * i);
        }
        for (int j = lower; j <= high; j = j + i) {
            prime[j-low] = false;//*j to j-low
        }
    }
   
    for (int i = low; i <= high; i++) {
        if (prime[i-low] == true) { //*change i to i-low
            cout << (i) << " ";
        }
    }
}
 
int main(){
 segmentedSieve(110,130);
      
 return 0;
}