/*
LeetCode #1 - Reverse Integer
link:https://leetcode.com/problems/reverse-integer/description/

input: x = 123
Output: 321
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        while(x != 0)
        {
            int b = x % 10;
            reversed = reversed * 10 + b;
            x = x / 10;
        }
        if(reversed > INT_MAX || reversed < INT_MIN)
            return 0;
        return reversed;
    }
};