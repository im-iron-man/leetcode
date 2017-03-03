class Solution 
{
	public:
		int removeDuplicates(int A[], int n) 
		{
			int num = 0;
        
			for(int i = 1; i < n ; ++i)
			{
				if(A[i] != A[num])
				{
					++num;
					A[num] = A[i];
				}
			}
        
			return n ? num+1 : 0;
		}
};