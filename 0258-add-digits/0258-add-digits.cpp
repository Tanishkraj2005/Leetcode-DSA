class Solution {
public:
    int sum(int n){
        int s=0;
        if(n<10){
            return n;
        }
        while(n!=0){
            int digit = n%10;
            s+=digit;
            n/=10;
        }
        return sum(s);
    }
    int addDigits(int num) {
        return sum(num);
    }
};