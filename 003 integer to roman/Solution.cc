class Solution 
{
	public:
		string intToRoman(int num) 
		{
			string a[4][10] = {
				{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
				{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
				{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
				{"", "M", "MM", "MMM"},
			};
         
			string roman;
			roman.append(a[3][num / 1000]);
			roman.append(a[2][num / 100 % 10]);
			roman.append(a[1][num / 10  % 10]);
			roman.append(a[0][num       % 10]);
			return roman;
		}
};