# Palindrome Number - LeetCode
**Submitted by:** Unavailable

## Problem Statement
Unavailable

## Examples
Unavailable

## Constraints
Unavailable

## Input Format
Unavailable

## Output Format
Unavailable

## Submission Details
- Platform: LeetCode
- Language: c
- Submission Status: Accepted
- Submitted At: Unavailable
- Problem URL: https://leetcode.com/problems/palindrome-number/

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
