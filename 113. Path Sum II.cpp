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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <vector<int>> ans;
        vector <int> temp;
        
        find(root, ans, temp, targetSum);
        return ans;
       
    }
    
    void find(TreeNode* root, vector <vector<int>> &ans, vector <int> &temp ,int targetsum){
        if(!root) return;
        temp.push_back(root->val);
        if(root->val == targetsum && !root->left && !root->right){
            ans.push_back(temp);
        }
        find(root->left , ans, temp, targetsum - root->val);
        find(root->right , ans, temp, targetsum - root->val);
        temp.pop_back();
    }
   
};
