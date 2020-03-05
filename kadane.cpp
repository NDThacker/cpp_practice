#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int tests, size;
	cin >> tests;
	long sMax, tMax, ele;


	while(tests-- > 0)
	{
		cin >> size;
		sMax = 0;
		tMax = 0;
		long maxE = LONG_MIN;
		for(int idx = 0; idx < size; idx++)
		{
			cin >> ele;
			tMax += ele;
			if(maxE < ele)
				maxE = ele;
			if(tMax < 0)
				tMax = 0;
			if(tMax > sMax)
				sMax = tMax;
		}
		if(sMax != 0)
			cout << sMax << endl;
		else
			cout << maxE << endl;
	}
}