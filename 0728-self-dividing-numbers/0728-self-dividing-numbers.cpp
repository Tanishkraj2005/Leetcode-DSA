class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;

    for (int i = left; i <= right; i++) {
        int original = i;
        bool divi = true;
        int temp = i;

        while (temp != 0) {
            int digit = temp % 10;

            if (digit == 0 || original % digit != 0) {
                divi = false;
                break;
            }

            temp /= 10;
        }

        if (divi) {
            ans.push_back(original);
        }
        }
        return ans;
    }
};