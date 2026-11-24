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
bool ans=false;
void fun(TreeNode* root,int sum,int targetSum){
    //agar root node is null toh:-
    if(root==NULL){
        return;
    }
    sum=sum+root->val;
    //agar root node is itself a leaf node:-
    if(root->left==NULL && root->right==NULL){
        if(sum==targetSum)
        ans=true;
        return;
    }
    //agar root node leaf node nahi huaa toh:-
    fun(root->left,sum,targetSum);
    fun(root->right,sum,targetSum);
    return;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        return ans;
    }
};