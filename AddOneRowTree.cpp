class Solution {
public:
    void dfs(TreeNode* root, int val, int d,int curr){
        if(curr==d-1){
            root->left=new TreeNode(val,root->left,nullptr);
            root->right=new TreeNode(val,nullptr,root->right);
            return;
        }
        if(root->left) dfs(root->left,val,d,curr+1);
        if(root->right) dfs(root->right,val,d,curr+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1) return new TreeNode(val,root,nullptr);
        dfs(root,val,depth,1);
        return root;
    }
};
