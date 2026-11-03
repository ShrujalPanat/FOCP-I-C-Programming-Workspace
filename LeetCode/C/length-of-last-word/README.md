# Length of Last Word - LeetCode
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
- Problem URL: https://leetcode.com/problems/length-of-last-word/submissions/2188294862/

## Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
int lengthOfLastWord(char* s) {
    int count = 0;
    int i = strlen(s) - 1;

    while (i >= 0 && s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
```
