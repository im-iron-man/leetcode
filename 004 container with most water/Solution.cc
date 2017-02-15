class Solution 
{
	public:
		int maxArea(vector<int> &height)
		{
			int max = 0;
        
			for(size_t i = 0; i < height.size()-1; ++i)
			{
				for(size_t j = i+1; j < height.size(); ++j)
				{
					int tmp = (j-i) * min(height[i], height[j]);
					if(tmp > max) max = tmp;
				}
			}
        
			return max;
		}
};