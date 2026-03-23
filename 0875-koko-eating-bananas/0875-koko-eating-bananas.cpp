class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        int low = 1;
        int high = *max_element(arr.begin(),arr.end());
        while(low<=high){
        long long s=0;
            int mid = (low+high)/2;
            for(int i=0;i<n;i++){
                s+= (arr[i]+mid-1)/mid;
            }
            if(s>h){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};