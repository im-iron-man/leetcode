class Solution 
{
	public:
		void connect(TreeLinkNode *root) 
		{
			if(!root) return;
        
			TreeLinkNode *p = root;
			TreeLinkNode *q;
        
			while(p->left)
			{
				q = p;
            
				while(q)
				{
					q->left->next = q->right;
					if(q->next) q->right->next = q->next->left;
					q = q->next;
				}
            
				p = p->left;
			}
		}
};