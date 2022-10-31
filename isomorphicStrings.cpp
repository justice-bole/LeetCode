// Created on 10/31/2022.
//Isomorphic Strings
//Given two strings s and t, determine if they are isomorphic.
//Two strings s and t are isomorphic if the characters in s can be replaced to get t.
//All occurrences of a character must be replaced with another character while preserving the order of characters.
//No two characters may map to the same character, but a character may map to itself.

#include <string>
#include<unordered_map>
#include <unordered_set>

//original solution
bool isIsomorphic(std::string& s, std::string& t) {
    std::unordered_map<char, char> map;
    std::unordered_set<char> mapped;

    if(s.size() != t.size()) return false;

    for(int i{0}; i < s.size(); ++i) {
        int cs{s[i]};
        int ct{t[i]};

        if(map.count(cs)) {
            if(map[cs] == ct) continue;
            else return false;
        }
        else {
            if(mapped.count(ct))
                return false;
            map[cs] = ct;
            mapped.insert(ct);
        }
    }
    return true;
}



