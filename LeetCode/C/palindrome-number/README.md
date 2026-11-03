# Palindrome Number - LeetCode
**Submitted by:** shrujalpanat

## Problem Statement
Given an integer x, return true if x is a palindrome, and false otherwise. Example 1: Input: x = 121 Output: true Explanation: 121 reads as 121 from left to right and from right to left. Example 2: Input: x = -121 Output: false Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome. Example 3: Input: x = 10 Output: false Explanation: Reads 01 from right to left. Therefore it is not a palindrome. Constraints: -231 <= x <= 231 - 1 Follow up: Could you solve it without converting the integer to a string?

## Examples
Example 1: Input: x = 121 Output: true Explanation: 121 reads as 121 from left to right and from right to left. Example 2: Input: x = -121 Output: false Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome. Example 3: Input: x = 10 Output: false Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

## Constraints
Constraints: -231 <= x <= 231 - 1 Follow up: Could you solve it without converting the integer to a string?

## Input Format
Unavailable

## Output Format
Unavailable

## Submission Details
- Platform: LeetCode
- Language: c
- Submission Status: Unknown
- Submitted At: Unavailable
- Problem URL: https://leetcode.com/problems/palindrome-number/submissions/2188416370/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (except 0 itself)
    // cannot be palindromes.
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;

    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // For even digits: x == reversedHalf
    // For odd digits: x == reversedHalf / 10
    return (x == reversedHalf || x == reversedHalf / 10);
}
```
