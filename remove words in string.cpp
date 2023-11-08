class Solution {
public:
    string reverseWords(string s) {
        string result = "", word;
        for(char ch: s){
            if(ch != ' ') word += ch;
            else {
                reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            }
        }
        reverse(word.begin(), word.end());
        result += word;

        return result;
    }
};