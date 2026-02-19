class Solution {
public:

    int hap(vector<int>& ans, set<int>& seen){
        int s = 0;
        for(int i = 0; i < ans.size(); i++){
            s += ans[i] * ans[i];
        }

        if(s == 1) return 1;
        if(seen.count(s)) return 0;
        seen.insert(s);

        vector<int> next;
        while(s != 0){
            next.push_back(s % 10);
            s /= 10;
        }
        return hap(next, seen);
    }

    bool isHappy(int n) {
        vector<int> ans;

        while(n != 0){
            ans.push_back(n % 10);
            n /= 10;
        }

        set<int> seen;   
        return hap(ans, seen);
    }
};
