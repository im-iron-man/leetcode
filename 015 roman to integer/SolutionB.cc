class SolutionB 
{
	public:
		int romanToInt(string s) 
		{
			map<char, int> cor;
			cor['I'] = 1;
			cor['V'] = 5;
			cor['X'] = 10;
			cor['L'] = 50;
			cor['C'] = 100;
			cor['D'] = 500;
			cor['M'] = 1000;
        
			int ans = 0;
			int preValue = 0;
        
			for(int i = s.size(); i >= 0; --i)
			{
				int curValue = cor[s[i]];
				if(curValue < preValue) ans -= curValue;
				else                    ans += curValue;
				preValue = curValue;
			}
        
			return ans;
    }
};