# Quick Sort

### **Leetcode:** [Link](https://practice.geeksforgeeks.org/problems/quick-sort/1) 
Quick Sort is a widely used comparison-based sorting algorithm that follows the divide-and-conquer strategy to sort an array. It is known for its efficiency and often performs better in practice than other popular sorting algorithms like Merge Sort and Bubble Sort.

## Algorithm Description
Quick Sort works as follows:

- Partitioning: The array is divided into two sub-arrays - elements less than a chosen pivot and elements greater than the pivot.

- Conquer: Recursively sort the two sub-arrays.

- Combine: The sorted sub-arrays are combined to form the final sorted array.

## Time Complexity
The time complexity of Quick Sort depends on the choice of the pivot element and the distribution of elements in the array. In the average and best cases, Quick Sort has a time complexity of O(n log n), which is very efficient. However, in the worst case (e.g., when the pivot choice consistently selects the smallest or largest element), the time complexity can degrade to O(n^2).

The efficiency of Quick Sort makes it a popular choice for sorting large datasets and is often used as the default sorting algorithm in many programming languages.

## Space Complexity
Quick Sort is an in-place sorting algorithm, which means it does not require additional memory for sorting. The space complexity is O(log n) in the average and best cases due to the recursive calls and partitioning. In the worst case, where partitioning leads to deep recursion, the space complexity can reach O(n).

## Stability
Quick Sort is not a stable sorting algorithm. This means that the relative order of equal elements may change during the sorting process.

## Implementation
Quick Sort can be implemented both recursively and iteratively. The choice of pivot element (e.g., the first element, the last element, or a random element) can influence the performance of the algorithm. Careful selection of the pivot can help avoid the worst-case time complexity and make Quick Sort consistently fast.