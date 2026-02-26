class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string temp;
        vector<string> word;
        while(ss>>temp){
            word.push_back(temp);
        }
        int n=word.size();
        string m=word[n-1];
        return m.size();
    }
};