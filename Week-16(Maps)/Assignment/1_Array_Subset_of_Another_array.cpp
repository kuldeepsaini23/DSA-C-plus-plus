

#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}


string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mapping;
    // string ans = "Yes";
    for(int i=0; i<n; i++){
        mapping[a1[i]]++;
    }
    
    //check wheter all elements of a2 present in a1
    for(int i=0; i<m; i++){
        if(mapping.find(a2[i]) == mapping.end()){
            //map me nhi mila
            return "No";
        }
        else{
            //Present but occurance should be greater than zero
            if(mapping[a2[i]] > 0){
                mapping[a2[i]]--;
            }
            else{
                return "No";
            }
        }
    }
    return "Yes";
}