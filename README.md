# UMass Boston CS 240

# Homework 2

# Due 7/11/2021 23:

[Overleaf](https://www.overleaf.com/read/fqhzhdpgdkyf)

## (10 Points) Submission of Homework 3

- Submit only hw2.c file (5 Points)
- Do not write anything to stdout (do not use printf) in hw2.c when submit; do not write main function
    in hw2.c; you can write custom test code in the main function (5 Points)

## 1 (10 Points) Century

Given a year, return the century it is in. The first century spans from the year 1 up to and including theyear 100, the second - from the year 101 up to and including the year 200, etc.

Guaranteed constraints:1 <= year <= 2005.

int centuryFromYear(int year)
{
}

Example:For year = 1905, the output should be

```
For year = 1700, the output should becenturyFromYear(year) = 20;
centuryFromYear(year) = 17.
```

## 2 (10 Points) Palindrome

Given the string, check if it is a palindrome. A string is a palindrome when it reads the same backward asforward. For example, ”121” is palindrome while ”123” is not.

[input] string inputStringA non-empty string consisting of lowercase characters.

Guaranteed constraints:
1 <= inputString.length <= 10^
[output] int
1 if inputString is a palindrome, 0 otherwise.
int checkPalindrome(const char * inputString) {
}

Example:
For inputString = "aabaa", the output should becheckPalindrome(inputString) = true;
For inputString = "abac", the output should be
For inputString = "a", the output should becheckPalindrome(inputString) = false;
checkPalindrome(inputString) = true.


## 3 (10 Points) adjacentElementsProduct

Given an array of integers, find the pair of adjacent elements that has the largest product and return thatproduct

[input]
An array of integers containing at least two elements.
Guaranteed constraints:
2 <= size <= 10,-1000 <= arr[i] <= 1000.

[output] integer
The largest product of adjacent elements.
int adjacentElementsProduct(int[] arr, int size){

}

For arr = [3, 6, -2, -5, 7, 3], the output should beadjacentElementsProduct(arr, 6) = 21.

7 and 3 produce the largest product.


## 4 (15 Points) Number of 0 Bits 15 Points

Write a function that takes an unsigned integer and returns the number of ’0’ bits it has

int numberof0s(unsigned num)
{
}

Example:
Input: num = 1
Output: 31Explanation: The input binary expression
00000000000000000000000000000001 has a total of 31 ’0’ bits.


## 5 (15 Points) – any(const char* s1, char* s2)

Write the function any(s1,s2) , which returns the first location in a string s1 where any character from thestring s2 occurs, or -1 if s1 contains no characters from s.

int any(const char* s1, char* s2){

}

Example:
Input: s1 = "abc", s2 = "c"
Output: 2Explanation: s1 contains ’c’ at index 2 exists in s

Input: s1 = "abc", s2 = "bc"
Output: 1
Input: s1 = "abc", s2 = "d"Output: -1


## 6 (15 Points) – char* squeeze hw2(const char* s1, const char* s2)

Write squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.

char* squeeze_hw2(const char* s1, const char* s2)
{
}

Example:
Input: s1 = "abc", s2 = "c"Output: "ab"

Input: s1 = "abc", s2 = "bc"
Output: "a"
Input: s1 = "abc", s2 = ""Output: "abc"


## 7 (15 Points) – rightrot(unsigned x, int n)

Write a function rightrot(x,n) that returns the value of the integer x bitwisely rotated to the right by npositions.

unsigned bitrightrot(unsigned x, int n)
{
}

Example:
Input: x = 3u, n = 1
Output: 2147483649u
Explanation: 

The input binary expression  00000000000000000000000000000011 
The output binary expression 10000000000000000000000000000001 


Example:
Input: x = 3u, n = 32
The input binary expression  00000000000000000000000000000011 
The output binary expression 00000000000000000000000000000011 


