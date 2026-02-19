class Solution {
public:
    int first(int arr[], int size, int target) {
        int start = 0;
        int end = size - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                ans = mid;        // store answer
                end = mid - 1;    // move left
            }
            else if (target > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    int last(int arr[], int size, int target) {
        int start = 0;
        int end = size - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                ans = mid;        
                start = mid + 1;  
            }
            else if (target > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        if (n == 0) return {-1, -1};

        // convert vector → array pointer
        int* arr = nums.data();

        int f = first(arr, n, target);
        int l = last(arr, n, target);

        return {f, l};
    }
};
