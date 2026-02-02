class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){
            return 0;
        }
        
        int rev = 0;
        int org=n;
        while(n!=0){
            int digit = n%10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10){
                return 0;
            }
            rev = rev * 10 + digit;
            n/=10;
        }
        if(org == rev){
            return 1;
        }
        else{
            return 0;
        }
    }
};