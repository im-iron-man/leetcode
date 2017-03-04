class Solution 
{
	public:
		int totalNQueens(int n) 
		{
			int a[n];
			totalNQueens(a, n, 0);
			return sum;
		}
    
	private:
		int sum = 0;
    
		bool isvalid(int a[], int k)
		{
			for(int i = 0; i < k; ++i)
				if(abs(a[i] - a[k]) == abs(i-k) || a[i] == a[k]) 
					return false;
			return true;
		}
    
		void totalNQueens(int a[], int n, int k)
		{	
			if(k == n) ++sum;
			for(int i = 0; i < n; ++i)
			{
				a[k] = i;
				if(isvalid(a, k)) totalNQueens(a, n, k+1);
			}
		}
};