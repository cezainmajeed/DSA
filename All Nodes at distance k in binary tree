void makepar(TreeNode *root,unordered_map<TreeNode *,TreeNode *>&m)
{
    if(root==NULL)
    return;
    queue<TreeNode *>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode *temp=q.front();
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
            m[temp->left]=temp;
        }
        if(temp->right)
        {
            q.push(temp->right);
            m[temp->right]=temp;
        }
    }
    
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode *,TreeNode *>m;
        makepar(root,m);
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*,int>vis;
        vis[target]++;

int cnt=0;
vector<int>res;
        while(!q.empty())
        {
            int s=q.size();
             if(cnt==k)
            break;
             cnt++;
           
            while(s--)
            {
            TreeNode *temp=q.front();
            q.pop();
           
            if(temp->left&&!vis[temp->left])
            {
                q.push(temp->left);
                vis[temp->left]++;
            }
            if(temp->right&&!vis[temp->right])
            {
                q.push(temp->right);
                vis[temp->right]++;
            }
            if(m[temp]&&!vis[m[temp]])
            {
                q.push(m[temp]);
                vis[m[temp]]=1;
            }

            }
           

        }

        while(!q.empty())
        {
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;

    }
