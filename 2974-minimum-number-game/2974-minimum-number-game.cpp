class Solution {
public:
    vector<int> numberGame(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i+=2){
            swap(arr[i],arr[i+1]);
        }
        return arr;
    }
};