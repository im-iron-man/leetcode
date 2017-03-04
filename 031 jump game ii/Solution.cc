class Solution 
{
	public:
		int jump(int A[], int n) 
		{
			int sum = 0;
			int index = n-1;
         
			for(int i = 0; i < index; ++i)
			{
				if(i + A[i] >= index)
				{
					index = i;
					i = -1;
					++sum;
				}
			}
         
			return sum;
		}
};