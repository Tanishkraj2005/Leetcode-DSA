class Solution {
public:
    int maxi = INT_MIN;
    int dfs(TreeNode* root){
        // if(root->val<0) return root;
        if(root==NULL) return 0;
        int left = max(0,dfs(root->left));
        int right = max(0,dfs(root->right));
        maxi = max(maxi,root->val+left+right);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};