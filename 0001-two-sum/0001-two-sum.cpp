class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num = arr[i];
            int moreNeeded = target-num;
            if(mp.find(moreNeeded)!=mp.end()){
                return {mp[moreNeeded],i};
            }
            mp[num]=i;
        }
        return {-1,-1};
    }
};