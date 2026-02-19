class Solution {
public:
    int maxi = 0;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        maxi = max(left+right,maxi);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxi = 0;
        dfs(root);
        return maxi;
    }
};