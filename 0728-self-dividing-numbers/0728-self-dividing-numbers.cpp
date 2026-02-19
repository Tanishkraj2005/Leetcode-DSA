class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> result;   // final answer
        vector<int> digits;   // temporary digit container

        for (int i = left; i <= right; i++) {
            int original = i;
            int temp = i;
            digits.clear();
            bool divi = true;

            // Extract digits
            while (temp != 0) {
                int digit = temp % 10;

                if (digit == 0) {
                    divi = false;
                    break;
                }

                digits.push_back(digit);
                temp /= 10;
            }

            // Check divisibility
            if (divi) {
                for (int j = 0; j < digits.size(); j++) {
                    if (original % digits[j] != 0) {
                        divi = false;
                        break;
                    }
                }
            }

            if (divi) {
                result.push_back(original);
            }
        }

        return result;
    }
};
