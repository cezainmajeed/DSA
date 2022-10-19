  void solve(Node*&head,unordered_map<Node*,bool>&m){
        if(head==NULL)
        {
            return ;
        }
        m[head]=1;
        if(head->next!=NULL&&m[head->next]){
            head->next=NULL;
            return;
        }
        head=head->next;
        adi(head,m);
    }
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*,bool>m;
       solve(head,m);
       
    }