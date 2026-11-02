# For Loop in C
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
- Platform: HackerRank
- Language: c
- Submission Status: Unknown
- Submitted At: Unavailable
- Problem URL: https://www.hackerrank.com/challenges/for-loop-in-c/problem

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i == 1)
            printf("one\n");
        else if (i == 2)
            printf("two\n");
        else if (i == 3)
            printf("three\n");
        else if (i == 4)
            printf("four\n");
        else if (i == 5)
            printf("five\n");
        else if (i == 6)
            printf("six\n");
        else if (i == 7)
            printf("seven\n");
        else if (i == 8)
            printf("eight\n");
        else if (i == 9)
            printf("nine\n");
        else if (i > 9 && i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}

```
