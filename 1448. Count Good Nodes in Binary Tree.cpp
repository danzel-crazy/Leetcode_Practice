/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int num = 0;
        if(root->val < 0){
            dfs(root, root->val, num);
        } 
        
        
        else dfs(root, 0, num);
        return num;
    }
    
    void dfs(TreeNode* root, int big, int &num){
        if(root == nullptr) return;
        
        if(big <= root->val){
            num++;
            cout << root->val << endl;
        } 
        big = max(big, root->val); 
        
        dfs(root->left, big, num);
        dfs(root->right, big, num);
    }
};
