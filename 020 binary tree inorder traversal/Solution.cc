class Solution 
{
	public:
		vector<int> inorderTraversal(TreeNode *root) 
		{
			vector<int> tmp;
			if(!root) return tmp;
        
			if(root->left)
			{
				vector<int> left  = inorderTraversal(root->left);
				tmp.insert(tmp.end(), left.begin(), left.end());
			}
        
			tmp.push_back(root->val);
        
			if(root->right)
			{
				vector<int> right = inorderTraversal(root->right);
				tmp.insert(tmp.end(), right.begin(), right.end());
			}
        
			return tmp;
		}
};