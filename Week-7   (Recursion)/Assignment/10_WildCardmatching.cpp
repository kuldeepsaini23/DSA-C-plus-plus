#include<iostream>
using namespace std;

//* Wild Card matching
bool isMatching(string s, int si, string p, int pi){
    //Base Case
    if(si==s.size() && pi==p.size()){
        return true;
    }
    //Another Base Case
    if(si==s.size() && pi<p.size()){
        while(pi<p.size()){
            if(p[pi]!='*'){
                return false;
            }
            pi++;
        }
        return true;
    }
    //processing + Recrusion call
    if(s[si] == p[pi] || p[pi]=='?'){
        return isMatching(s,si+1,p,pi+1);
    }
      if(p[pi] == '*'){
          //Case A when * is taken as empty
          bool caseA = isMatching(s, si, p, pi+1);
          //Case B when * is taken equal to a word
          bool caseB = isMatching(s,si+1, p, pi);
          return caseA || caseB;
      }

        return false;
    }

bool isMatch(string s, string p) {
  int si = 0;
  int pi = 0;
  return isMatching(s,si,p,pi);
}
 
int main(){
  string s = "aaada";
  string pattern = "aad*";
  cout<<isMatch(s,pattern);
      
 return 0;
}