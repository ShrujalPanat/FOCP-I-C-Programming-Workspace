# Longest Substring Without Repeating Characters

- **Platform:** LeetCode
- **Problem URL:** https://leetcode.com/problems/longest-substring-without-repeating-characters/
- **Platform username:** shrujalpanat
- **Programming language:** c
- **Submission status:** Accepted (`accepted`)
- **Submission timestamp:** Not available
- **Submission detected:** 2026-11-01T16:45:37.235Z
- **Submission ID:** Not available
- **Execution time:** Not available
- **Memory usage:** Not available

## Problem statement

Description

Description

Accepted

Accepted

Editorial

Editorial

Solutions

Solutions

Submissions

Submissions

Code

Code

Testcase

Testcase

Test Result

Test Result

[3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Solved

Medium

Topics

Companies

Hint

Given a string `s`, find the length of the **longest**  without duplicate characters.

**Example 1:**

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
```

**Example 2:**

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

**Example 3:**

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

**Constraints:**

- `0 <= s.length <= 105`
	
- `s` consists of English letters, digits, symbols and spaces.

Seen this question in a real interview before?

1/6

Yes

No

Accepted

10,523,795/26.3M

Acceptance Rate

40.1%

Topics

Staff
[Hash Table](https://leetcode.com/tag/hash-table/)[String](https://leetcode.com/tag/string/)[Sliding Window](https://leetcode.com/tag/sliding-window/)

Companies

Hint 1

There are less than 100 unique characters. We can check all substrings with length at most 100 for example. This is a good enough approximation.

Similar Questions

[Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)

Medium

[Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)

Medium

[Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/)

Hard

[Maximum Erasure Value](https://leetcode.com/problems/maximum-erasure-value/)

Medium

[Number of Equal Count Substrings](https://leetcode.com/problems/number-of-equal-count-substrings/)

Medium

[Minimum Consecutive Cards to Pick Up](https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/)

Medium

[Longest Nice Subarray](https://leetcode.com/problems/longest-nice-subarray/)

Medium

[Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/)

Medium

[Count Complete Subarrays in an Array](https://leetcode.com/problems/count-complete-subarrays-in-an-array/)

Medium

[Find Longest Special Substring That Occurs Thrice II](https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-ii/)

Medium

[Find Longest Special Substring That Occurs Thrice I](https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/)

Medium

Discussion (981)

💡 Discussion Rules

1. Please don't post **any solutions** in this discussion.

2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.

3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.

[](https://leetcode.com/u/sourvad/)

[Vadlamani Sourab](https://leetcode.com/u/sourvad/)

Mar 10, 2024

When I attempted this question a few months ago I was stumped and demoralized by my ineptitude. Now coming across this question today, it was a breeze. To all those who felt the same way I felt when I struggled with this question, stick with it, the grind is worth it, and you will see personal growth. Don't give up, skeleton!

Read more

1.5K

41

[](https://leetcode.com/u/artemilin-2023/)

[LightChimera](https://leetcode.com/u/artemilin-2023/)

Aug 28, 2023

986 / 987 testcases passed T_T

Read more

583

29

[](https://leetcode.com/u/michaelg02/)

[michaelg02](https://leetcode.com/u/michaelg02/)

Dec 10, 2019

The wording of the question was unclear for me. Example 3 does cover this where "wke" was the longest not "wkew", but the wording of the question suggests that the substring can have multiple of the same character as long as it is not repeating.

"wkew" would pass because the substring does not have two w's in a row.

*Instead of:

Given a string, find the length of the longest substring without repeating characters.*

*I think this is a better wording:

Given a string, find the length of the longest substring without **duplicate** characters.*

Read more

844

23

[](https://leetcode.com/u/ooPo/)

[ooPo](https://leetcode.com/u/ooPo/)

May 26, 2019

Do not try to use brute force to pass the problem.

Read more

434

31

[](https://leetcode.com/u/priyanshsingh279/)

[Priyansh Singh](https://leetcode.com/u/priyanshsingh279/)

Dec 26, 2022

Some test cases:

" "

"dvdf"

"ckilbkd"

"tmmzuxt"

Read more

162

12

[](https://leetcode.com/u/technologyaddicted/)

[Salheen Bakhet](https://leetcode.com/u/technologyaddicted/)

Aug 28, 2017

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

I do not understand that in the Example # 3, it mentions 'wke' as the longest substring. Why not "kew" selected as the longest one? Help here is much appreciated.

Read more

279

36

[](https://leetcode.com/u/Asyncy99/)

[Code2Offer](https://leetcode.com/u/Asyncy99/)

Jan 21, 2024

[https://jr46mg.csb.app/](https://leetcode.com/link/?target=https%3A%2F%2Fjr46mg.csb.app%2F)   So I tried to visualize it  with my code in React.js. Hope it helps someone

Read more

105

18

[](https://leetcode.com/u/anthonyhuang/)

[anthonyhuang](https://leetcode.com/u/anthonyhuang/)

May 24, 2018

I have some problem understanding the problem, this test case "dvdf "says the output should be 3, while I suppose it should be 2.

"dv" or "df" is what I think. It should be substring not subsequence like the question mentioned. Should it confined to "Consistent String"?

Read more

155

30

[](https://leetcode.com/u/uakrongrad/)

[uakrongrad](https://leetcode.com/u/uakrongrad/)

Sep 17, 2021

I think the task could be better explained by asking the tester to find the length of the longest non repeating set of continous characters in the string.

Read more

111

5

[](https://leetcode.com/u/sanyuktakate/)

[Sanyukta Sanjay Kate](https://leetcode.com/u/sanyuktakate/)

Dec 30, 2019

Did anyone get an error as - *" is not a valid value of type string* for an input which was a string with space (" ")?

Read more

65

10

Copyright © 2026 LeetCode. All rights reserved.

13

14

12

10

11

9

8

7

5

6

4

3

2

1

unsigned char ch = (unsigned char)s[i];

for (int i = 0; s[i] != '\0'; i++) {

int maxLength = 0;

int start = 0;

}

for (int i = 0; i < 256; i++) {

last[i] = -1;

int last[256];

int lengthOfLongestSubstring(char* s) {

In the editor, Tab inserts indentation. Press Ctrl+M to toggle whether Tab moves focus out of the editor. Press Ctrl+' to run the code. Press Ctrl+Enter to submit.

Saved

Ln 1, Col 1

You must run your code first

All Submissions

Accepted
1036 / 1036 testcases passed

[](https://leetcode.com/u/shrujalpanat)
shrujalpanat
submitted at Nov 01, 2026 22:15

Runtime

7ms

Beats63.65%

Memory

12.13MB

Beats86.77%

Created with Highcharts 11.1.010ms213ms416ms620ms823ms1027ms1230ms1433ms0%50%100%

Created with Highcharts 11.1.010ms213ms416ms620ms823ms1027ms1230ms1433ms

Code

C

```
1
2int lengthOfLongestSubstring(char* s) {
3    int last[256];
4
5    for (int i = 0; i < 256; i++) {
6        last[i] = -1;
7    }
8
9    int start = 0;
10    int maxLength = 0;
11
12    for (int i = 0; s[i] != '\0'; i++) {
13        unsigned char ch = (unsigned char)s[i];
14
15        if (last[ch] >= start) {
16            start = last[ch] + 1;
17        }
18
19        last[ch] = i;
20
21        int length = i - start + 1;
22
23        if (length > maxLength) {
24            maxLength = length;
25        }
26    }
27
28    return maxLength;
29}
30
```

View more

0/5

FindHeaderBarSize

FindTabBarSize

FindBorderBarSize

## Input format

Not available

## Output format

Not available

## Constraints

Not available

## Sample input

Not available

## Sample output

Not available
