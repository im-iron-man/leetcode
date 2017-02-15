class Solution 
{
	public:
		int maxProfit(vector<int> &prices) 
		{
			int sum  = 0;
			int size = prices.size();
        
			for(int i = 0; i < size-1; ++i)
			{
				int var = prices[i+1] - prices[i];
				if(var > 0) sum += var;
			}
        
			return sum;
		}
};