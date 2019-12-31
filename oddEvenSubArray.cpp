#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
	int size, odds = 0, evens = 0, res = 0;
	cin >> size;
	int inArr[size];
	unordered_map<int, int>  pairCounter;
	pairCounter[0] = 1;

	for(int ind = 0; ind < size; ind++)
	{
		cin >> inArr[ind];
		if(inArr[ind] % 2 == 0)
			evens++;
		else
			odds++;
		if(pairCounter.count(odds - evens) == 1)
		{
			pairCounter[odds - evens]++;
		}
		else
		{
			pairCounter[odds - evens] = 1;
		}
		
	}
	for(auto entry : pairCounter)
	{
		if(entry.second == 1)
			continue;
		else
		{
			res += (entry.second * (entry.second - 1) / 2);
		}
	}
	cout << res;
	

}