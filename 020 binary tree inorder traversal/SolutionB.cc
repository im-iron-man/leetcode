class SolutionB
{
	public:
		vector<int> inorderTraversal(TreeNode *root) 
		{
			inorder(root);
			return tmp;
		}
    
	private:
		vector<int> tmp;
    
		void inorder(TreeNode *root)
		{
			if(!root) return;
        
			inorder(root->left);
			tmp.push_back(root->val);
			inorder(root->right);
		}
};