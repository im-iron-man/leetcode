/*
 * k<n*n防止n=1，2，3的情形。
 */

class Solution 
{
	public:
		vector<vector<int> > generateMatrix(int n) 
		{
			vector<vector<int>> a(n, vector<int>(n,0));
			if(n==0) return a;
			int i=0,j=0,k=1;
			for(;k<n*n;)
			{
				for(;j<n-1&&a[i][j+1]==0;a[i][j++]=k++);
				for(;i<n-1&&a[i+1][j]==0;a[i++][j]=k++);
				for(;j>0&&a[i][j-1]==0;a[i][j--]=k++);
				for(;i>0&&a[i-1][j]==0;a[i--][j]=k++);
			}
			a[i][j]=k;
			return a;
		}
};