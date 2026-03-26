class Solution {
public:
    int majorityElement(vector<int>& arr) {
        // Boyeer moore's voting algo
        int c=0; 
        int ele;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(c==0){
                c=1;
                ele = arr[i];
            }
            else if(arr[i]==ele) c++;
            else c--;
        }
        int c1 = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==ele) c1++;
        }
        if(c1 > n/2){
            return ele;
        }
        return -1;
    }
};