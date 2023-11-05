class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  a=0,b=sqrt(c);
        long long sqrt=1;
        while(a<=b){
            sqrt=a*a+b*b;
            if(sqrt==c){
                return true;
            }
            else if(sqrt>c){
                b--;
            }
            else{
                a++;
            }
        }
        return false;
    }
};