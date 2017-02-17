/*
 * 复杂度为O(n^2)。
 * 复杂度为O(nlgn)的算法参见算法导论英文版第三版70-73；复杂度为O(n)的算法参见算法导论英文版第三版习题4.1-5。
 */

class Solution
{
	public:
		int maxProfit(vector<int> &prices) 
		{
			int max_sum  = 0;
			int size = prices.size();
        
			for(int i = 0; i < size-1; ++i)
			{
				int sum = 0;
				for(int j = i; j < size-1; ++j)
				{
					sum += prices[j+1] - prices[j];
					if(sum > max_sum) max_sum = sum;
				}
			}
        
			return max_sum;
		}
};