/*
 * 阶乘的返回值会超出int的范围。
 */

class SolutionB
{
	public:
		int uniquePaths(int m, int n)
		{return factorial(m+n-2)/(factorial(m-1)*factorial(n-1));}
		
    private:
		int factorial(int n)
		{
			int product = 1;
			for(int i = 0; i < n; ++i)
				product *= i+1;
			return product;
		}
};