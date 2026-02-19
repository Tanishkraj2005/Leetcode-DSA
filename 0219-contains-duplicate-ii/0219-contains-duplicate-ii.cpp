class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int, int> lastSeen;

        for (int i = 0; i < n; i++) {
        if (lastSeen.count(arr[i])) {
            int prevIndex = lastSeen[arr[i]];
            if (abs(i - prevIndex) <= k) {
                return true;
                return 0;
            }
        }
        lastSeen[arr[i]] = i;  // update last seen position
    }
    return false;
    }
};