# Assignment

## Introduction

In this assignment, we will explore various coding problems that are often inefficient when solved using recursion but can be significantly improved with the use of Dynamic Programming (DP). We will also discuss the time complexities for each problem when solved using recursion.

## Problems

### 1. Last Occurrence of a Character

- **Problem**: Given a string, find the last occurrence of a character.
- **Time Complexity (Recursion)**: O(n), where n is the length of the string.

### 2. Reverse a String

- **Problem**: Reverse a given string.
- **Time Complexity (Recursion)**: O(n), where n is the length of the string.

### 3. Add Strings (LeetCode)

- **Problem**: Add two non-negative integers represented as strings.
- **Time Complexity (Recursion)**: O(max(len(num1), len(num2)), where num1 and num2 are the input strings.
- **Link**: [LeetCode - Add Strings](https://leetcode.com/problems/add-strings/)

### 4. Palindrome String

- **Problem**: Check if a given string is a palindrome.
- **Time Complexity (Recursion)**: O(n), where n is the length of the string.

### 5. Print All Subarrays Using Recursion

- **Problem**: Print all possible subarrays of an array.
- **Time Complexity (Recursion)**: O(2^n), where n is the size of the array (exponential time).

### 6. Remove All Occurrences of a String (LeetCode)

- **Problem**: Remove all occurrences of a substring from a string.
- **Time Complexity (Recursion)**: O(n * m), where n is the length of the input string and m is the length of the substring to remove (TLE).
- **Time Complexity (Dynamic Programming)**: O(n), where n is the length of the input string.
- **Link**: [LeetCode - Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/)

### 7. Buy and Sell Stocks (LeetCode)

- **Problem**: Find the best time to buy and sell stocks for maximum profit.
- **Time Complexity (Recursion)**: O(n), where n is the number of days.
- **Link**: [LeetCode - Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### 8. House Robber (LeetCode)

- **Problem**: Determine the maximum amount that can be robbed without adjacent houses being robbed.
- **Time Complexity (Recursion)**: O(2^n), where n is the number of houses (exponential time).
- **Time Complexity (Dynamic Programming)**: O(n), where n is the number of houses.
- **Link**: [LeetCode - House Robber](https://leetcode.com/problems/house-robber/)

### 9. Integer To String (LeetCode)

- **Problem**: Convert an integer to an English word representation.
- **Time Complexity (Recursion)**: O(log10(num)), where num is the input number.
- **Time Complexity (Dynamic Programming)**: O(log10(num)), where num is the input number.
- **Link**: [LeetCode - Integer to English Words](https://leetcode.com/problems/integer-to-english-words/)
- **Indian Version**: [GeeksforGeeks](https://practice.geeksforgeeks.org/problems/number-to-words0335/1)

### 10. Wild Card Matching (LeetCode and GeeksforGeeks)

- **Problem**: Implement wildcard pattern matching with '*' and '?'.
- **Time Complexity (Recursion)**: O(2^(m+n)), where m is the length of the input string and n is the length of the pattern (exponential time).
- **Time Complexity (Dynamic Programming)**: O(m * n), where m is the length of the input string and n is the length of the pattern.
- **Link**: [LeetCode - Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)
- **GeeksforGeeks**: [Wildcard Pattern Matching](https://practice.geeksforgeeks.org/problems/wildcard-pattern-matching/1)
- **GeeksforGeeks**: [Wildcard String Matching](https://practice.geeksforgeeks.org/problems/wildcard-string-matching1126/1)

### 11. Perfect Square (LeetCode)

- **Problem**: Find the perfect squares and return the minimum number of squares that sum up to the given number.
- **Time Complexity (Recursion)**: O(2^(n/2)), where n is the input number (exponential time).
- **Time Complexity (Dynamic Programming)**: O(n), where n is the input number.
- **Link**: [LeetCode - Perfect Squares](https://leetcode.com/problems/perfect-squares/)

### 12. Minimum Cost for Tickets (LeetCode and GeeksforGeeks)

- **Problem**: Find the minimum cost for purchasing tickets on specific days.
- **Time Complexity (Recursion)**: O(365), as the maximum length for days is 365.
- **Time Complexity (Dynamic Programming)**: O(n), where n is the number of days.
- **Link**: [LeetCode - Minimum Cost for Tickets](https://leetcode.com/problems/minimum-cost-for-tickets/)
- **GeeksforGeeks**: [Minimum Cost to Fill Given Weight in a Bag](https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1)

### 13. Number of Dice Roll with Target Sum (LeetCode)

- **Problem**: Find the number of ways to get a target sum using a specific number of dice rolls with a given number of faces on each die.
- **Time Complexity (Recursion)**: O(d * f * target), where d is the number of dice, f is the number of faces on each die, and target is the target sum (TLE).
- **Time Complexity (Dynamic Programming)**: O(d * f * target), where d is the number of dice, f is the number of faces on each die, and target is the target sum.
- **Link**: [LeetCode - Number of Dice Rolls with Target Sum](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/)

## Conclusion

By addressing these problems using Dynamic Programming, you will enhance your problem-solving skills and learn the advantages of this approach over recursion.

Happy coding!
