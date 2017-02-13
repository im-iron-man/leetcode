class Solution 
{
	public:
		int evalRPN(vector<string> &tokens) 
		{
			stack<int> value;
	
			for(auto x: tokens)
			{
				if(x != "+" && x != "-" && x != "*" && x != "/") value.push(atoi(x.c_str()));
				else
				{
					int b = value.top();
					value.pop();
				
					int a = value.top();
					value.pop();
                
					if(x == "+") value.push(a + b);
					if(x == "-") value.push(a - b);
					if(x == "*") value.push(a * b);
					if(x == "/") value.push(a / b);
				}
			}
        
			return value.top();
		}
};