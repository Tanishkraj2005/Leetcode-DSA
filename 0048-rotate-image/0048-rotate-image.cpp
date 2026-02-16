class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr.size();

        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int k=0;k<row;k++){
            reverse(arr[k].begin(),arr[k].end());
        }
    }
};