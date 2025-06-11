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
vector<vector<int>>ans;
int t;
void dfs(TreeNode*cur,long sum,vector<int>&v)
{
// base case 

if(!cur)return ;
sum+=cur->val;
v.push_back(cur->val);
if(sum==t&&!cur->left&&!cur->right){ans.push_back(v);}
//transition

dfs(cur->left,sum,v);
dfs(cur->right,sum,v);
v.pop_back();
// backtrack from sum by default due to pass it by value
}
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        t=target;
        vector<int>v;
        dfs(root,0,v);
        return ans;
    }
};
