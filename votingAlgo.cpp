#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
	int tests, size, res, ct;
	cin >> tests;

	while (tests--)
	{
		cin >> size;
		int intArr[size];
		res = 0;
		ct = 0;
		for(int ind = 0; ind < size; ind++)
		{
			cin >> intArr[ind];
			if(intArr[ind] == intArr[res])
			    ct++;
			else
			    ct--;
			if(ct == 0)
			{
			    res = ind;
				ct = 1;
			}
		}
		ct = 0;
		for(int ind = 0; ind < size; ind++)
		{
		    if(intArr[ind] == intArr[res])
		        ct++;
		}
		// cout << ct << endl;
		if(ct > size / 2)
		    cout << intArr[res];
	    else
	        cout << -1;
	    cout << endl;
	}
	return 0;
}