#include <iostream>
using namespace std;

int mBSearch(int rotated[], int size, int query, int index, int start, int end)
{
	
	long long int mid = (start + end) / 2;
	long long int midPrev = mid;
	
	mid = (mid + index) % size;
	if(start == end)
		return rotated[mid] == query ? mid : -1;
	if (rotated[mid] == query)
		return mid;
	else if (rotated[mid] < query)
		return mBSearch(rotated, size, query, index, midPrev + 1, end);
	else
		return mBSearch(rotated, size, query, index, start, midPrev - 1);
	return 0;
}



int main() {
	//code
	
	int tests;
	long long int query, size;
	cin >> tests;
	while (tests--)
	{
	    cin >> size;
	    int rotated[size];
	    long long int index;
	    
	    for(long long int ind = 0; ind < size; ind++)
	    {
	        cin >> rotated[ind];
	        if(ind > 0 && rotated[ind] < rotated[ind - 1])
	            index = ind;
	    }
	    cin >> query;
	    cout << mBSearch(rotated, size, query, index, 0, size - 1) << endl;
	}
	return 0;
}