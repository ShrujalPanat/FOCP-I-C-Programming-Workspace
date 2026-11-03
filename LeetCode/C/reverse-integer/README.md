# Reverse Integer - LeetCode
**Submitted by:** shrujalpanat

## Problem Statement
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. Assume the environment does not allow you to store 64-bit integers (signed or unsigned). Example 1: Input: x = 123 Output: 321 Example 2: Input: x = -123 Output: -321 Example 3: Input: x = 120 Output: 21 Constraints: -231 <= x <= 231 - 1

## Examples
Example 1: Input: x = 123 Output: 321 Example 2: Input: x = -123 Output: -321 Example 3: Input: x = 120 Output: 21

## Constraints
Constraints: -231 <= x <= 231 - 1

## Input Format
Unavailable

## Output Format
Unavailable

## Submission Details
- Platform: LeetCode
- Language: c
- Submission Status: Accepted
- Submitted At: Unavailable
- Problem URL: https://leetcode.com/problems/reverse-integer/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow
        if (rev > 214748364 || (rev == 214748364 && digit > 7))
            return 0;

        // Check for underflow
        if (rev < -214748364 || (rev == -214748364 && digit < -8))
            return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

```
