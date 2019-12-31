#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int tests, size, vPair;
	cin >> tests;
	while(tests-- > 0)
	{
		cin >> size;
		vPair = 0;
		int aRating[size];

		for(int ind1 = 0; ind1 < size; ind1++)
			cin >> aRating[ind1];
		
		for(int ind1 = 0; ind1 < size - 1; ind1++)
		{
			for(int ind2 = ind1 + 1; ind2 < size; ind2++)
			{
				if(aRating[ind1] >= (aRating[ind2] / 2.0) && aRating[ind2] >= (aRating[ind1] / 2.0))
				{
					vPair++;
					// cout << aRating[ind1] << " " << aRating[ind2] << endl;
				}
			}
		}
		cout << vPair << endl;
	}

	return 0;
}