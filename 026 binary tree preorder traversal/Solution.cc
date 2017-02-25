class Solution 
{
	public:
		vector<int> preorderTraversal(TreeNode *root) 
		{
			preorder(root);
			return tmp;
		}
    
	private:
		vector<int> tmp;
    
		void preorder(TreeNode *root)
		{
			if(!root) return;
        
			tmp.push_back(root->val);
			preorder(root->left);
			preorder(root->right);
		}
};