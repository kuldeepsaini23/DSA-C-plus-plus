# Merge Sort 
### GeeksForGeeks [Link](https://practice.geeksforgeeks.org/problems/quick-sort/1)

Merge Sort is a popular sorting algorithm that follows the divide-and-conquer approach. It works by breaking down an array into smaller subarrays until each subarray consists of only one element, then merging these subarrays to produce a sorted array.

## Time Complexity
The time complexity of the merge sort algorithm is **O(n log n)** in the worst, average, and best cases. This is because the algorithm divides the array into smaller halves recursively sorts them, and then merges them back together. The log(n) factor represents the number of times the array can be divided, and the linear factor (n) represents the time required to merge these subarrays.

## Space Complexity
The space complexity of the merge sort algorithm is O(n). This is because the algorithm creates temporary arrays for merging the subarrays, and the size of these arrays is proportional to the size of the input array. Therefore, the space complexity is linear with respect to the input size.

Merge sort is a stable sorting algorithm that guarantees consistent performance, making it a reliable choice for sorting large datasets.