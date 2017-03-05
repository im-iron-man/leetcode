class Solution 
{
	public:
		int searchInsert(int A[], int n, int target) 
		{
			int i = 0, j = n-1;
        
			while(i<j)
			{
				int mid = i + (j-i)/2;
				if(A[mid] == target) return mid;
				if(A[mid] > target)  j = mid-1;
				if(A[mid] < target)  i = mid+1;
			}
        
			return target > A[i] ? i+1 : i;
		}
};