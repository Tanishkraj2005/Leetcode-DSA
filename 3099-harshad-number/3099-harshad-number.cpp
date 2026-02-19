class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int original = x;
        int s=0;
        while(x!=0){
            int digit=x%10;
            s+=digit;
            x/=10;
        }
        if(original%s==0){
            return s;
        }
        else{
            return -1;
        }
    }
};