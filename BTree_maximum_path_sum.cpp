int mx=INT_MIN;
    int dfs(TreeNode* root){
        int curr=root->val;
        int lt=0,rt=0;
        if(root->left) lt=dfs(root->left);
        if(root->right) rt=dfs(root->right);
        mx=max(mx,(lt+rt+curr));
        mx=max(mx,curr);
        mx=max(mx,(lt+curr));
        mx=max(mx,(rt+curr));

        int temp=max((lt+curr),(rt+curr));
        return max(curr,temp);

    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return mx;
    }
