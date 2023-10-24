#include<iostream>
using namespace std;

//* Ciel Search
int ceilSearch(int arr[], int low, int high, int x) {
	int mid;
	if (x < arr[low])
		return low;
	if (x >= arr[high])
		return -1;
	mid = (low + high) / 2;
	if (arr[mid] == x)
		return mid;
	else if (arr[mid] < x) {
		if (mid + 1 <= high && x <= arr[mid + 1]) //* Add =
			return mid + 1;
		else
			return ceilSearch(arr, mid + 1, high, x);
	}
	else {
		if (mid - 1 >= low && x > arr[mid - 1])//* Add = in mid-1 and remove = in x>arr[mid-1]
			return mid;
		else
			return ceilSearch(arr, low, mid - 1, x);
	}
}
 
int main(){
	int ceil[] = {1,2,3,4,5,6,9};
	cout<< ceilSearch(ceil,0,7,5);
      
 return 0;
}