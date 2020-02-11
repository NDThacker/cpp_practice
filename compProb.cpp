#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
	long long int tests, size, probs;
	int ele, ind;
	cin >> tests;
	while(tests--)
	{
		probs = 0;
		cin >> size;
		for(ind = 0; ind < size; ind++)
		{
			cin >> ele;
			// cout << ele;
			probs += ele;
		}
		cout << (probs / (10 * size * M_PI)) << endl;
	}
}