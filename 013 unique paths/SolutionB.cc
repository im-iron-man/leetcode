/*
 * 迭代的复杂度过大。
 */

class SolutionB
{
	public:
		int uniquePaths(int m, int n)
		{
			if(m == 1) return 1;
			if(n == 1) return 1;
			return uniquePaths(m, n-1) + uniquePaths(m-1, n);
		}
};