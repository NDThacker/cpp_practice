#include <iostream>
using namespace std;

int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}


int findMaxPrice(int rods[], int size, int curSum, int curInd, int curSize)
{
	//cout << "in index " << curInd << "Sum : "<< curSum <<endl;
    if(curSize + curInd > size)
        return 0;
    return max(rods[curInd-1] + findMaxPrice(rods, size, curSum+rods[curInd-1], curInd, curSize+curInd), max(findMaxPrice(rods, size, curSum, curInd+1, curSize), rods[curInd-1] + findMaxPrice(rods, size, curSum+rods[curInd-1], curInd+1, curSize+curInd)));
}


int main() {
	//code
	int tests, size, res;
	cin >> tests;
	while (tests--)
	{
	    res = 0;
	    cin >> size;
	    int rods[size];
	    for (int ind = 0; ind < size; ind++)
	        cin >> rods[ind];
	   cout << findMaxPrice(rods, size, 0, 1, 0) << endl;
	}
	return 0;
}