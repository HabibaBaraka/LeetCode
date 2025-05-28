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
     bool same(TreeNode*p,TreeNode*q){
     // the base case 
      if(!p&&!q)return 1;
      if(!p||!q)return 0;
      if(p->val!=q->val)return 0;
      // transition
     return same(p->right,q->right)&&
       same(p->left,q->left);
   }
   bool preOrder(TreeNode* p,TreeNode*q) {
		// the base case  when i stop
		if (p == nullptr)return 0 ;
		//transition what i do 
	if(same(p,q))return 1;
		return preOrder(p->left,q)||
		preOrder(p->right,q);
      
	}
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //traverse
return preOrder(root,subRoot);
    }
};
