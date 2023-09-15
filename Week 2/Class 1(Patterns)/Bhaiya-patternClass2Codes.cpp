#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int row=0; row<n; row=row+1) {
		char ch;
		for(int col=0; col<row+1; col=col+1) {
			int number = col+1;
			 ch = number + 'A' -1;
			cout << ch;
		}

		//jab tak A tk nahi pohochte
		//tab tk print krenge 

		for(char alphabet = ch; alphabet>'A'; ) {
			alphabet= alphabet-1;
			cout << alphabet;
		}
		cout << endl;
	}

	// for(int row=0; row<n; row=row+1) {
	// 	for(int col=0;col<n-row; col=col+1) {
	// 		if(row ==0 || row == n-1) {
	// 			cout << "*";	
	// 		}
	// 		else {
	// 			if(col ==0 || col == n-row - 1) {
	// 				cout <<"*";
	// 			}
	// 			else {
	// 				cout << " ";
	// 			}
	// 		}
				
	// 	}
	// 	cout << endl;
	// }
	

	// for(int row=0; row<n; row=row+1) {
	// 	int totalCol = row+1;
	// 	for(int col=0; col<totalCol; col=col+1) {
			
	// 		if(col == totalCol -1){
	// 			cout << row+1;
	// 		}
	// 		else {
	// 			cout << row+1 << "*";
	// 		}
			
	// 	}
	// 	cout << endl;
	// }

	// for(int row=0; row<n; row=row+1) {
	// 	//innner loop
	// 	for(int col=0; col<2*row+1; col=col+1) {
	// 		if(col%2 ==  1) {
	// 			//odd number
	// 			cout << "*";
	// 		}
	// 		else {
	// 			cout << row+1;
 // 			}
	// 	}
	// 	cout << endl;
	// }
	
	// int num = 8;

	// int n = 4;

	// for(int row=0;row<n; row=row+1) {
	// 	//inverted pyramid 1
	// 	for(int col=0; col<n-row; col=col+1) {
	// 		cout << "*";
	// 	}
	// 	//full pyramid 1
	// 	for(int col=0;col<2*row+1; col=col+1) {
	// 		cout << " ";
	// 	}

	// 	//inverted pyramid 2
	// 	for(int col=0; col<n-row; col=col+1) {
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }


	// for(int row=0;row<n; row=row+1) {
	// 	//inverted pyramid 1
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		cout << "*";
	// 	}
	// 	//full pyramid 1
	// 	for(int col=0;col<2*n-2*row-1; col=col+1) {
	// 		cout << " ";
	// 	}

	// 	//inverted pyramid 2
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }
	
	// int n;
	// cin >> n;

	
	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0; col<row; col=col+1) {
	// 		cout << " ";
	// 	}

	// 	//stars
	// 	int totalCol = n-row;
	// 	for(int col=0; col< totalCol; col=col+1) {
	// 		//if first or last col
	// 		if(col == 0 || col == totalCol -1) {
	// 			cout << "* ";
	// 		}
	// 		else {
	// 			cout << "  ";
	// 		}
			
	// 	}
	// 	cout << endl;
	// }


	// for(int row=0; row<n; row=row+1) {
	// 	//space
	// 	for(int col=0; col<n-row-1; col=col+1) {
	// 		cout <<" ";
	// 	}
	// 	//stars
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		//print star for first and last col
	// 		if(col ==0 || col == row + 1 - 1) {
	// 			cout << "* ";
	// 		}
	// 		else {
	// 			//for every col between first and last
	// 			//column, print spaces
	// 			cout << "  ";
	// 		}
			
	// 	}
	// 	cout << endl;
	// }

	// int n = num/2;
	
	// for(int row=0; row<n; row=row+1) {
	// 	//space
	// 	for(int col=0; col<n-row-1; col=col+1) {
	// 		cout <<" ";
	// 	}
	// 	//stars
	// 	for(int col=0; col<row+1; col=col+1) {
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }
	

	// for(int row=0; row<n; row=row+1) {
	// 	//spaces
	// 	for(int col=0; col<row; col=col+1) {
	// 		cout << " ";
	// 	}

	// 	//stars
	// 	for(int col=0; col<n-row; col=col+1) {
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }

	

  return 0;
}