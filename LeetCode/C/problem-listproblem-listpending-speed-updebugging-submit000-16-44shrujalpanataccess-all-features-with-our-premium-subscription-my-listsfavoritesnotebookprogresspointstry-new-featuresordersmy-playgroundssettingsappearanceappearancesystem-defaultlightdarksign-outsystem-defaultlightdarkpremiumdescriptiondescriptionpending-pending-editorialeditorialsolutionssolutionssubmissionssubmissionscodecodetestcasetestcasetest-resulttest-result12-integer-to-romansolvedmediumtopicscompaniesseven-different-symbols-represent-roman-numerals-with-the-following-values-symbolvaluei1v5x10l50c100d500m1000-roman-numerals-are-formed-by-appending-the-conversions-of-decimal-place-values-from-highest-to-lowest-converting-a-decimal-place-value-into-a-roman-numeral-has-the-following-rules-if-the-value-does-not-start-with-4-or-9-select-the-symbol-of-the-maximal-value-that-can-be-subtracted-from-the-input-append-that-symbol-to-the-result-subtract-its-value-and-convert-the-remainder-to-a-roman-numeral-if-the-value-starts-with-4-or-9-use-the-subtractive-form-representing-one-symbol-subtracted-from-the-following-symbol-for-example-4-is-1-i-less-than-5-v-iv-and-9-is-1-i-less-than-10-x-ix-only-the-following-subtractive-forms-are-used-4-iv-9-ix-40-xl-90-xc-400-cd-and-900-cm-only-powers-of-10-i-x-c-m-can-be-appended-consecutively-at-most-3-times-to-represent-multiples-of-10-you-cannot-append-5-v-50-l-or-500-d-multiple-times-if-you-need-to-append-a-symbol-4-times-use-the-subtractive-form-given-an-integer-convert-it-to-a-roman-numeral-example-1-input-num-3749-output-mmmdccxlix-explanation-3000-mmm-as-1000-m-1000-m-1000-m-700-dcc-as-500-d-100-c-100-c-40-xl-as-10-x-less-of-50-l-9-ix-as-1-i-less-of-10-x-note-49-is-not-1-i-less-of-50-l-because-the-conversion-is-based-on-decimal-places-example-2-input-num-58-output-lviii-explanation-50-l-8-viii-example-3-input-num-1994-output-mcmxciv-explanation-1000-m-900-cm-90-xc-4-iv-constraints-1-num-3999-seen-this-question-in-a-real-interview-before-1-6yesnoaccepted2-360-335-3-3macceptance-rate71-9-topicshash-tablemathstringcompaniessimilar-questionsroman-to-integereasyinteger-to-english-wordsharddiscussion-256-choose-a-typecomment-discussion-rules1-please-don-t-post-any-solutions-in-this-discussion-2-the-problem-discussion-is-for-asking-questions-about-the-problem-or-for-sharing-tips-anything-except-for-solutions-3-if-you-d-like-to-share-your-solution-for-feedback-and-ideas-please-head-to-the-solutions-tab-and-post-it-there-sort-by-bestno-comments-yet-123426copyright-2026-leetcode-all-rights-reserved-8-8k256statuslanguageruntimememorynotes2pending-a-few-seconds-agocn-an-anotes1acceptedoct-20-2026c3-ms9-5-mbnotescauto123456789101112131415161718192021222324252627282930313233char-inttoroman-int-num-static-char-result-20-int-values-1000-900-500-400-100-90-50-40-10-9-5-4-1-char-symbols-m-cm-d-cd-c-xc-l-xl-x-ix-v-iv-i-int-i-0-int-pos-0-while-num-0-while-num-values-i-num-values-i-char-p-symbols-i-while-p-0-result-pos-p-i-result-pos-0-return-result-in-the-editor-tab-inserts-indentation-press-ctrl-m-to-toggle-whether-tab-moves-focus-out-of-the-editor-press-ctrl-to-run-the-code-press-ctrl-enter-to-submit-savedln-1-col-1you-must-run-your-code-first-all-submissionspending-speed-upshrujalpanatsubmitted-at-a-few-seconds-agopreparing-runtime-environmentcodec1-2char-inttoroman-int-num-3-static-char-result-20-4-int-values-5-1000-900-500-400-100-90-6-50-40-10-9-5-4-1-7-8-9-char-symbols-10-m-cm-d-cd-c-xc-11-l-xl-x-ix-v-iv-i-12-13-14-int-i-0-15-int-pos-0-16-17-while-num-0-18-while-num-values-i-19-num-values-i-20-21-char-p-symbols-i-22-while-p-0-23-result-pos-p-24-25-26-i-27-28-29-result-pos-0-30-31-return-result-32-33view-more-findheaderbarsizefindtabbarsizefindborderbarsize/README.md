# Problem ListProblem ListPending...Speed UpDebugging...Submit000:16:44shrujalpanatAccess all features with our Premium subscription!My ListsFavoritesNotebookProgressPointsTry New FeaturesOrdersMy PlaygroundsSettingsAppearanceAppearanceSystem DefaultLightDarkSign OutSystem DefaultLightDarkPremiumDescriptionDescriptionPending...Pending...EditorialEditorialSolutionsSolutionsSubmissionsSubmissionsCodeCodeTestcaseTestcaseTest ResultTest Result12. Integer to RomanSolvedMediumTopicsCompaniesSeven different symbols represent Roman numerals with the following values: SymbolValueI1V5X10L50C100D500M1000 Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules: If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral. If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM). Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form. Given an integer, convert it to a Roman numeral. Example 1: Input: num = 3749 Output: "MMMDCCXLIX" Explanation: 3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M) 700 = DCC as 500 (D) + 100 (C) + 100 (C) 40 = XL as 10 (X) less of 50 (L) 9 = IX as 1 (I) less of 10 (X) Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places Example 2: Input: num = 58 Output: "LVIII" Explanation: 50 = L 8 = VIII Example 3: Input: num = 1994 Output: "MCMXCIV" Explanation: 1000 = M 900 = CM 90 = XC 4 = IV Constraints: 1 <= num <= 3999 Seen this question in a real interview before?1/6YesNoAccepted2,360,335/3.3MAcceptance Rate71.9%TopicsHash TableMathStringCompaniesSimilar QuestionsRoman to IntegerEasyInteger to English WordsHardDiscussion (256)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestNo comments yet.123426Copyright © 2026 LeetCode. All rights reserved.8.8K256StatusLanguageRuntimeMemoryNotes2Pending...a few seconds agoCN/AN/ANotes1AcceptedOct 20, 2026C3 ms9.5 MBNotesCAuto123456789101112131415161718192021222324252627282930313233char* intToRoman(int num) { static char result[20]; int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 }; char *symbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; int i = 0; int pos = 0; while (num > 0) { while (num >= values[i]) { num -= values[i]; char *p = symbols[i]; while (*p != '\0') { result[pos++] = *p++; } } i++; } result[pos] = '\0'; return result;}In the editor, Tab inserts indentation. Press Ctrl+M to toggle whether Tab moves focus out of the editor. Press Ctrl+' to run the code. Press Ctrl+Enter to submit.SavedLn 1, Col 1You must run your code first All SubmissionsPending...Speed Upshrujalpanatsubmitted at a few seconds agopreparing runtime environmentCodeC1 2char* intToRoman(int num) { 3 static char result[20]; 4 int values[] = { 5 1000, 900, 500, 400, 100, 90, 6 50, 40, 10, 9, 5, 4, 1 7 }; 8 9 char *symbols[] = { 10 "M", "CM", "D", "CD", "C", "XC", 11 "L", "XL", "X", "IX", "V", "IV", "I" 12 }; 13 14 int i = 0; 15 int pos = 0; 16 17 while (num > 0) { 18 while (num >= values[i]) { 19 num -= values[i]; 20 21 char *p = symbols[i]; 22 while (*p != '\0') { 23 result[pos++] = *p++; 24 } 25 } 26 i++; 27 } 28 29 result[pos] = '\0'; 30 31 return result; 32} 33View more FindHeaderBarSizeFindTabBarSizeFindBorderBarSize
**Submitted by:** Unavailable

**Platform:** LeetCode
**Language:** c
**Submission Status:** Unknown
**Submitted At:** Unavailable
**Problem URL:** https://leetcode.com/problems/integer-to-roman/submissions/2187959054/

## 1. Problem Statement
Unavailable

## 2. Examples
Unavailable

## 3. Constraints
Unavailable

## 4. Input Format
Unavailable

## 5. Output Format
Unavailable

## 6. Solution
See [solution.c](./solution-2.c).

```${codeLanguage}
1 2char* intToRoman(int num) { 3 static char result[20]; 4 int values[] = { 5 1000, 900, 500, 400, 100, 90, 6 50, 40, 10, 9, 5, 4, 1 7 }; 8 9 char *symbols[] = { 10 "M", "CM", "D", "CD", "C", "XC", 11 "L", "XL", "X", "IX", "V", "IV", "I" 12 }; 13 14 int i = 0; 15 int pos = 0; 16 17 while (num > 0) { 18 while (num >= values[i]) { 19 num -= values[i]; 20 21 char *p = symbols[i]; 22 while (*p != '\0') { 23 result[pos++] = *p++; 24 } 25 } 26 i++; 27 } 28 29 result[pos] = '\0'; 30 31 return result; 32} 33
```

## 7. Submission Details
Unavailable
