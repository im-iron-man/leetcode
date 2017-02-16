class Solution
{
	public:
		bool isValidSudoku(vector<vector<char> > &board) 
		{
			for(int i = 0; i < 9; ++i)
			{
				string row = "";
				string col = "";
				string box = "";
             
				for(int j = 0; j < 9; ++j)
				{
					char r = board[i][j];
					char c = board[j][i];
					char b = board[i/3*3+j/3][i%3*3+j%3];
                 
					if(row.find(r) != -1) return false;
					if(r != '.')          row += r;
					if(col.find(c) != -1) return false;
					if(c != '.')          col += c;
					if(box.find(b) != -1) return false;
					if(b != '.')          box += b;
				}
			}
         
			return true;
		}
};