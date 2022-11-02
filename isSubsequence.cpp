// Created on 11/1/2022.
//Is Subsequence
//Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
//A subsequence of a string is a new string that is formed from the original string by deleting some (can be none)
//of the characters without disturbing the relative positions of the remaining characters.
//(i.e., "ace" is a subsequence of "abcde" while "aec" is not).

#include <string>

bool isSubsequence(std::string s, std::string t) {

    int j{0};
    for(int i{0}; i < t.length() and j < s.length(); ++i) {
        if(s[j] == t[i]) {
            ++j;
        }
    }
    return (j == s.length());
}