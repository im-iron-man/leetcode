class Solution 
{
	public:
		int climbStairs(int n) 
		{
			int a = 1;
			int b = 1;
        
			for(int i = 1; i < n; ++i)
			{
				int tmp = a;
				a = b;
				b = tmp + b;
			}
        
			return b;
		}
};