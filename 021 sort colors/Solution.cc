/*
 * 荷兰国旗问题。
 * 可以采用冒泡排序或者插入排序。
 * 可以采用快排的partition的方法：partition本质是将0，1的序列排序。
 */

class Solution 
{
	public:
		void sortColors(int A[], int n) 
		{
			int i = 0;
			int j = n-1;
			int k = 0;
        
			while(k < j+1)
			{
				if(A[k] == 0)
				{
					swap(A[i], A[k]);
					++i;
					++k;
				}
				else if(A[k] == 2)
				{
					swap(A[k], A[j]);
					--j;
				}
				else
					++k;
			}
		}
};