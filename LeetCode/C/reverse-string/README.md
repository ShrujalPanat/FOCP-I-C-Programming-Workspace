# Reverse String - LeetCode
**Submitted by:** shrujalpanat

## Problem Statement
Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in-place with O(1) extra memory. Example 1: Input: s = ["h","e","l","l","o"] Output: ["o","l","l","e","h"] Example 2: Input: s = ["H","a","n","n","a","h"] Output: ["h","a","n","n","a","H"] Constraints: 1 <= s.length <= 105 s[i] is a printable ascii character.

## Examples
Example 1: Input: s = ["h","e","l","l","o"] Output: ["o","l","l","e","h"] Example 2: Input: s = ["H","a","n","n","a","h"] Output: ["h","a","n","n","a","H"]

## Constraints
Constraints: 1 <= s.length <= 105 s[i] is a printable ascii character.

## Input Format
Unavailable

## Output Format
Unavailable

## Submission Details
- Platform: LeetCode
- Language: c
- Submission Status: Unknown
- Submitted At: Unavailable
- Problem URL: https://leetcode.com/problems/reverse-string/submissions/2188417454/

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
