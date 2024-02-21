# Priority Queue and its Questions

## What is Priority Queue?
A priority queue is a special type of queue in which each element is associated with a priority and is served according to its priority. If elements with the same priority occur, they are served according to their order in the queue.
Basically a Heap

### 1. Kth Smallest Element from an Array
- Mehtod 1: Sort the array and return the kth element
  - Time Complexity: O(nlogn)
  - Space Complexity: O(1)
- Method 2: Use a Min Heap of size n and insert all the elements in the heap and then pop the top element n-k times
  - Time Complexity: O(nlogn)
  - Space Complexity: O(n)
- Method 3: Use a Max Heap of size k and insert all the elements in the heap and then pop the top element k times
  - Time Complexity: O(nlogk)
  - Space Complexity: O(k)

### 2. Kth Largest Element from an Array
- Method 1: Use a Min Heap of size k and insert all the elements in the heap and then pop the top element k times
  - Time Complexity: O(nlogk)
  - Space Complexity: O(k)
  - **Leetcode:** [Leetcode](https://leetcode.com/problems/kth-largest-element-in-an-array/)

### 3. CBT is Valid heap or Not

### 4. BT is Valid CBT or Not
- **Leetcode:** [Leetcode](https://leetcode.com/problems/check-completeness-of-a-binary-tree/)

### 5. BST + CBT is Valid Heap or Not

 