/*
 * 0^1 = 1£¬1^0=1£¬0^0=0£¬1^1=0¡£
 * n^0 = n£¬n^1=~n¡£ 
 * a^b = b^a£¬(a^b)^c = a^(b^c)¡£
 */

class Solution 
{
	public:
		int singleNumber(int A[], int n) 
		{
			int ones = 0;
			int twos = 0;
			for(int i = 0; i < n; ++i)
			{
				twos |= ones&A[i];
				ones ^= A[i];
				int threes = ones&twos;
				ones &= ~threes;
				twos &= ~threes;
			}
			return ones;
		}
};