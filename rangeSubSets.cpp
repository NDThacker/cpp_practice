#include <iostream>
#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{
	int tests, noRanges;

	cin >> tests;
	

	while (tests-- > 0)
	{
		array<long long int, 10001> ranges = {0};	
		cin >> noRanges;
		int ind = 0, prevSum = 0, sum;
		bool shortAns = true;
		long long int start, end, maxEnd = 0;

		while (ind < noRanges)
		{
			cin >> start >> end;
			sum = end + start;
			if(ind != 0 and sum < prevSum)
				shortAns = false;
			prevSum = sum;
			if(maxEnd < end)
				maxEnd = end;
			for(int ind2 = start; ind2 <= end; ind2++)
				ranges[ind2]++;
			ind++;
		}
		if(shortAns)
		{
			cout << 1 << endl;
			continue;
		}
		int minDel = 10001;
		for(int ind2 = 2; ind2 < maxEnd - 1; ind2++)
		{
			cout << ranges[ind2] << " ";
			
			if(ranges[ind2] < ranges[ind2 - 1] && ranges[ind2] < ranges[ind2 + 1])
			{
				if(ranges[ind2] < minDel)
				{
					minDel = ranges[ind2];
				}
			}
		}
		if(minDel == 10001)
		{
			cout << -1 << endl;
			continue;
		}
		cout << endl << minDel << endl;
	}
}