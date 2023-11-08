class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0 ; i < s.size() ; i=i+(2*k)){
            int st = i;
            int e = i+k-1;
            if(e>=s.size()){
                e = s.size()-1;
            }
            while(st<e){
                swap(s[st++],s[e--]);
            }
         }
        return s;
       
    }
};