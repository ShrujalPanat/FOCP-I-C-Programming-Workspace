# Reverse String - LeetCode
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
- Problem URL: https://leetcode.com/problems/reverse-string/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}
```
