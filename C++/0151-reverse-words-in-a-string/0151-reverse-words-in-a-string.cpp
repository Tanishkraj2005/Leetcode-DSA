class Solution {
public:
    string reverseWords(string s) {
        vector<string> word;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            word.push_back(temp);
        }
        int n=word.size();
        int j=n-1;
        for(int i=0;i<n;i++){
            if(i<j){
                swap(word[i],word[j]);
            }
            j--;
        }
        string result="";
        for(int i=0;i<n;i++){
            result += word[i];
            if(i<n-1){
                result += " ";
            }
        }
        return result;
    }
};