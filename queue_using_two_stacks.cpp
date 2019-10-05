#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	stack <int> s1, s2;
	int qrs, choice, input;
	cin >> qrs;
	for(int ind = 0; ind < qrs; ind++)
	{
		cin >> choice;

		switch(choice)
		{
			case 1:
				cin >> input;
				s1.push(input);
				break;
			case 2:
				if(s2.empty())
				{
					while(!s1.empty())
					{
						s2.push(s1.top());
						s1.pop();
					}
				}
				s2.pop();
				break;
			case 3:
				if(s2.empty())
				{
					while(!s1.empty())
					{
						s2.push(s1.top());
						s1.pop();
					}
				}
				cout << s2.top() << endl;
				break;
			
			default:
				exit(0);
		}
	}
	return 0;
}