class Solution 
{
	public:
		int reverse(int x)
		{
			string s = to_string(x);
			string s_re;
        
			if(s[0] == '-')
			{
				string tmp(s.rbegin(), s.rend()-1);
				s_re = "-" + tmp;
			}
			else
			{
				string tmp(s.rbegin(), s.rend());
				s_re = tmp;
			}
        
			return stoi(s_re);
		}
};