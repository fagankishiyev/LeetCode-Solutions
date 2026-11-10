/*
LeetCode #1 - Palindrome Number
link:https://leetcode.com/problems/palindrome-number/?envType=problem-list-v2&envId=0d7ccul1

input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:
    bool isPalindrome(int x) {
        string a=to_string(x);
        string b(a.rbegin(),a.rend());
        if(b==a){
            return true;
        }
        else{
            return false;
        }    
        
    }
};