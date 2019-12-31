#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int tests;
	cin >> tests;
	long long int size, cur, counter;
	vector<long long int> seq;

	while(tests-- > 0)
	{
		counter = 0;
		seq.clear();
		cin >> size;
		for(long long int ind = 0; ind < size; ind++)
		{
			cin >> cur;
			seq.push_back(cur);
		}
		for(auto ind1 = 0; ind1 != size - 1; ind1++)
		{
			for(auto ind2 = ind1 + 1; ind2 != size; ind2++)
			{
				if(seq.at(ind1) + seq.at(ind2) == seq.at(ind1) * seq.at(ind2))
				{
					counter ++;
				}
			}
		}
		cout << counter << endl;
	}
}