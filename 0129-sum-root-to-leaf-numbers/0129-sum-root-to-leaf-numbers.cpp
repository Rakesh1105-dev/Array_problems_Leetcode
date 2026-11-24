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
int ans=0;
void fun(TreeNode* root,int sum){
    //agar root node is null toh:-
    if(root==NULL){
        return;
    }
    sum=sum*10+root->val;
    //agar root node is itself a leaf node:-
    if(root->left==NULL && root->right==NULL){
        ans=ans+sum;
        
        return;
    }
    //agar root node leaf node nahi huaa toh:-
    fun(root->left,sum);
    fun(root->right,sum);
    return;
}
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return ans;
    }
};