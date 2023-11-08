class Solution {
public:
    int strStr(string s2, string s1) {
        return s2.find(s1) != string::npos ? s2.find(s1) : -1;
    }
};