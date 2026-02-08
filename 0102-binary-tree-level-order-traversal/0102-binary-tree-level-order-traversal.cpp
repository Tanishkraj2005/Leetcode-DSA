class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void nthLevel(TreeNode* root,int curr,int target, vector<int>& v){
        if(root==NULL) return;
        if(curr==target){
            v.push_back(root->val);
            return;
        }
        nthLevel(root->left,curr+1,target,v);
        nthLevel(root->right,curr+1,target,v);
    }
    void lOrder(TreeNode* root, vector<vector<int>>& ans){
        int n=level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthLevel(root,1,i,v);
            ans.push_back(v);
            cout<<endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};