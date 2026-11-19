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
bool isSame(TreeNode* root1,TreeNode* root2){
    //agar same node null huye toh:-
    if(root1==NULL && root2==NULL){
        return true;
    }
    //agar ek node ki value null hai but dusre node ki value not null hai to ->not same
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->val != root2->val){
        return false;
    }
    bool r1=isSame(root1->left,root2->left);
    bool r2=isSame(root1->right,root2->right);
    if(r1==true && r2==true){
        return true;
    }
    return false;
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSame(p,q);
    }
};