## Count Primes
#### There are different approaches to solve this problem. The most efficient one is the Sieve of Eratosthenes.
- **Naive Approach:** Check if each number is prime or not. 
  - **Time Complexity:** O(n^2)
- **Sqrt Approach:** Check if each number is prime or not.
  - **Time Complexity:** O(n^1.5)
- **Sieve of Eratosthenes:** Mark all the multiples of a number as not prime.

  - **Time Complexity:** O(nlog(log(n)))
- **Segmented Sieve:** Divide the range into segments and apply the sieve. 
  - **Time Complexity:** O(nlog(log(n)))

### **LeetCode:** [Link](https://leetcode.com/problems/count-primes/)