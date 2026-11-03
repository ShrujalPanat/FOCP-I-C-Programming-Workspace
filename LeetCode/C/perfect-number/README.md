# Perfect Number - LeetCode
**Submitted by:** shrujalpanat

## Problem Statement
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly. Given an integer n, return true if n is a perfect number, otherwise return false. Example 1: Input: num = 28 Output: true Explanation: 28 = 1 + 2 + 4 + 7 + 14 1, 2, 4, 7, and 14 are all divisors of 28. Example 2: Input: num = 7 Output: false Constraints: 1 <= num <= 108

## Examples
Example 1: Input: num = 28 Output: true Explanation: 28 = 1 + 2 + 4 + 7 + 14 1, 2, 4, 7, and 14 are all divisors of 28. Example 2: Input: num = 7 Output: false

## Constraints
Constraints: 1 <= num <= 108

## Input Format
Unavailable

## Output Format
Unavailable

## Submission Details
- Platform: LeetCode
- Language: c
- Submission Status: Accepted
- Submitted At: Unavailable
- Problem URL: https://leetcode.com/problems/perfect-number/description/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
#include <stdbool.h>

bool checkPerfectNumber(int num) {
    if (num <= 1)
        return false;

    int sum = 1;  // 1 is a divisor of every number > 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;

            // Add the paired divisor if it's different
            if (i != num / i)
                sum += num / i;
        }
    }

    return sum == num;
}

```
