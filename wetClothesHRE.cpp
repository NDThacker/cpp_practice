#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
	int rains, clothes, turns, interval, dried = 0;

	cin >> rains >> clothes >> turns;
	int rains_invl[rains], clothes_dtm[clothes];
	unordered_set<int> dryCl;
	for(int ind = 0; ind < rains; ind++)
		cin >> rains_invl[ind];
	for(int ind = 0; ind < clothes; ind++)
		cin >> clothes_dtm[ind];
	
	for(int ind1 = 0; ind1 < rains - 1; ind1++)
	{
		interval = rains_invl[ind1 + 1] - rains_invl[ind1];
		for(int ind2 = 0; ind2 < clothes; ind2++)
		{
			if(dryCl.find(ind2) != dryCl.end())
			{
				continue;
			}
			else if(clothes_dtm[ind2] <= interval)
			{
				dryCl.insert(ind2);
				dried++;
			}
		}
	}
	cout << dried;
	return 0;
}