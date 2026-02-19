class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int mp[10004];
        stack<int> st;
        for(int i=b.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<b[i]){
                st.pop();
            }
            if(st.empty()) mp[b[i]] = -1;
            else mp[b[i]] = st.top();
            st.push(b[i]);
        }
        for(int x:a){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};