class Solution2
{
	public:
		int jump(int A[], int n) 
		{
			int cur = 0;
			int last = 0;
			int step = 0;
        
			for(int i = 0; i < n && last < n-1; ++i)
			{
				if(i > last)
				{
					last = cur;
					++step;
				}
				cur = max(cur, A[i] + i);
			}
        
			return step;
		}
};        