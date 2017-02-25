class Solution
{
	public:
		vector<vector<int> > levelOrder(TreeNode *root) 
		{
			level(root, 0);
			return tmp;
		}
    
	private:
		vector<vector<int>> tmp;
    
		void level(TreeNode *root, int i)
		{
			if(!root) return;
        
			if(i < tmp.size()) tmp[i].push_back(root->val);
			else               tmp.push_back(vector<int>(1, root->val));
        
			level(root->left, i+1);
			level(root->right, i+1);
		}
};