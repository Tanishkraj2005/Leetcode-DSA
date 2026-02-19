class Solution {
public:
    int trailingZeroes(int n) {
        return int(n/5)+int(n/25)+int(n/125)+int(n/625)+int(n/3125)+int(n/15625);
    }
};