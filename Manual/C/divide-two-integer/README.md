# divide two integer
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
- Platform: Manual
- Language: c
- Submission Status: Unknown
- Submitted At: Unavailable
- Problem URL: leetcode.com/problem/divide-two-integer/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}

#include <limits.h>

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = dividend;
    long long b = divisor;
    int negative = (a < 0) != (b < 0);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    long long quotient = 0;

    while (a >= b) {
        long long temp = b;
        long long multiple = 1;

        while (a >= temp + temp) {
            temp += temp;
            multiple += multiple;
        }

        a -= temp;
        quotient += multiple;
    }

    if (negative) {
        return (int)-quotient;
    }

```
