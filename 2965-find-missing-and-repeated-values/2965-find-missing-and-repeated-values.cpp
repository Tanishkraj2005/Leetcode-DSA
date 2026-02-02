class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n*n;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int a=-1;
        int b=-1;
        for (int x = 1; x <= size; x++) {
            if (mp[x] == 2) a = x;
            if (mp[x] == 0) b = x;
        }

        return {a, b};



    }
};