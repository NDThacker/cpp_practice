#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
	map <int, int> dict;
	int tests, size, res;
	cin >> tests;

	while (tests--)
	{
		cin >> size;
		dict.clear();
		int intArr[size];
		res = -1;
		for(int ind = 0; ind < size; ind++)
		{
			cin >> intArr[ind];
			if(dict.count(intArr[ind]))
				dict[intArr[ind]] = dict[intArr[ind]] + 1;
			else
				dict[intArr[ind]] = 1;
		}
		for(auto entry : dict)
		{
			//cout << entry.first << " " << entry.second << endl;
			if(entry.second > size / 2)
			{
				res = entry.first;
			}

		}
		cout << res << endl;
	}
	return 0;
}