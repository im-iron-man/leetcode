class Solution2 
{
	public:
		int totalNQueens(int n) 
		{
			int sum = 0;
			int ind = 0;
			int a[n];
			a[0] = -1;
        
			while(ind > -1)
			{
				++a[ind];
            
				while(a[ind] < n && !isvalid(a, ind))
					++a[ind];
            
				if(a[ind] < n)
					if(ind == n-1) ++sum;
					else           a[++ind] = -1;
				else
					--ind;
			}
        
			return sum;
		}
    
	private:
		bool isvalid(int a[], int k)
		{
			for(int i = 0; i < k; ++i)
				if(abs(a[i] - a[k]) == abs(i-k) || a[i] == a[k]) 
					return false;
			return true;
		}
};