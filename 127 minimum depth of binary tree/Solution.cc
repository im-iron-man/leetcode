class Solution 
{
	public:
		int run(TreeNode *root) 
		{
			if(!root)             return 0;
			else if(!root->left)  return run(root->right) + 1;
			else if(!root->right) return run(root->left)  + 1;
            
			return min(run(root->left), run(root->right)) + 1;
		}
};