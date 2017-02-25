/* 
 * 时间复杂度O(mn)，空间复杂度O(1)。
 * 利用第一行和第一列的空间做记录。
 */
 
class Solution 
{
	public:
		void setZeroes(vector<vector<int> > &matrix) 
		{
			int m = matrix.size();
			int n = matrix[0].size();
			bool row = false, col = false;
			
			// 判断第一行和第一列是否有零，防止被覆盖
			for(int i = 0; i < m; ++i)
				if(!matrix[i][0])
				{col = true;break;}
        
			for(int j = 0; j < n; ++j)
				if(!matrix[0][j])
				{row = true;break;}
        
			// 遍历矩阵，用第一行和第一列记录0的位置
			for(int i = 1; i < m; ++i)
				for(int j = 1; j < n; ++j)
					if(!matrix[i][j])
					{
						matrix[i][0] = 0;
						matrix[0][j] = 0;
					}
        
			// 根据记录清零
			for(int i = 1; i < m; ++i)
				for(int j = 1; j < n; ++j)
					if(!matrix[i][0] || !matrix[0][j])
						matrix[i][j] = 0;
			
			// 最后处理第一行和第一列
			if(col)
				for(int i = 0; i < m; ++i)
					matrix[i][0] = 0;
        
			if(row)
				for(int j = 0; j < n; ++j)
					matrix[0][j] = 0;
		}
};