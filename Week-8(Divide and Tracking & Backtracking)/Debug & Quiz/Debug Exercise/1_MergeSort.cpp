#include<iostream>
using namespace std;

//* Debug the code. This is the merge array function of merge sort.
void merge(int arr[], int start, int mid, int end) {
    int left[mid - start + 1];
    int right[end - mid];
    for (int i = 0; i <= mid - start; i++) {//* Add =
        left[i] = arr[start + i];
    }
    for (int j = 0; j < end - mid; j++) {//*Remove =
        right[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = start;
    while (i <= mid - start || j < end - mid) {//* Add = in i and remove = in j
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i <= mid - start) {//* Add =
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < end - mid) {//*Remove = 
        arr[k] = right[j];
        j++;
        k++;
    }
}
 
int main(){
 
      
 return 0;
}