class Solution 
{
	public:
		int maxDepth(TreeNode *root)
		{
			if(!root) return 0;
			else      return max(maxDepth(root->left), maxDepth(root->right)) + 1;
		}
};