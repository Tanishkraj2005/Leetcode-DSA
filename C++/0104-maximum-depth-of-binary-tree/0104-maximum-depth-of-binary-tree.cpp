class Solution {
public:
    int maxDepth(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int c = 0;
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* head = q.front();
                q.pop();
                if (head->left != NULL) q.push(head->left);
                if (head->right != NULL) q.push(head->right);
            }
            c++;
        }
        return c;
    }
};
