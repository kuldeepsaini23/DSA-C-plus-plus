#include<iostream>
#include<algorithm>
using namespace std;

//*Debug the code. Add two binary numbers.
string addBinary(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)//* changed i>0(infinite loop) to i>=0
        carry += a[i--] - '0';//*changed --i to i--
      if (j >= 0)//* changed i>0(infinite loop) to i>=0
        carry += b[j--] - '0';//*changed --j to j--
      ans += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }

int main(){
  string s = "10";
  string s2 = "10";
  cout<<addBinary(s,s2);
      
 return 0;
}