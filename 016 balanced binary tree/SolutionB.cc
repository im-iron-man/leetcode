class SolutionB 
{
	public:
		bool isBalanced(TreeNode *root) 
		{return f(root)[0];}
    
	private:
		vector<int> f(TreeNode *root) 
		{
			vector<int> a;
       	
			if(!root)
			{
				a.push_back(1);
				a.push_back(0);
				return a;
			}
        
			vector<int> b = f(root->left);
			vector<int> c = f(root->right);
        
			if(b[0] && c[0] && abs(b[1]-c[1]) <= 1)
			{
				a.push_back(1);
				a.push_back(max(b[1], c[1]) + 1);
			}
			else
			{
				a.push_back(0);
				a.push_back(max(b[1], c[1]) + 1);
			}
        
			return a;
		}
};