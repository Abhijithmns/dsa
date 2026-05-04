#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,26> , vector<string>> hmap;

        for(auto word : strs) {
            array<int,26> count = {};
            for(char c : word) {
                count[c - 'a']++;
            }
            hmap[count].push_back(word);
        }
        vector<vector<string>> res;
        for(auto [key,value] : hmap) {
            res.push_back(value);
        }
        return res;
    }
};
