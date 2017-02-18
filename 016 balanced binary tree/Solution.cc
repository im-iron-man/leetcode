class Solution 
{
	public:
		bool isBalanced(TreeNode *root) 
		{
			if(!root) return true;
			bool diff = abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
			return isBalanced(root->left) && isBalanced(root->right) && diff;
		}

	private:
		int maxDepth(TreeNode *root) 
		{
			if(!root) return 0;
			else      return max(maxDepth(root->left), maxDepth(root->right)) + 1;
		}
};