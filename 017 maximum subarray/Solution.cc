/*
 * 参见问题014 best time to buy and sell stock
 */

class Solution
{
	public:
		int maxSubArray(int A[], int n) 
		{
			int max_sum = A[0];
        
			for(int i = 0; i < n; ++i)
			{
				int sum = 0;
				for(int j = i; j < n; ++j)
				{
					sum += A[j];
					if(sum > max_sum) max_sum = sum;
				}
			}
        
			return max_sum;
		}
};