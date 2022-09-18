#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;
	int vlength, ele;
	//insert length of vector
	cin >> vlength;

	for(int itr = 0; itr < vlength; itr++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	vector<int> res(2 * vlength);
	for(int itr = 0; itr < vlength; itr++)
	{
		res[itr] = v[itr];
		res[itr + vlength] = v[itr];
	}
	for(int itr = 0; itr < 2 * vlength; itr++)
	{
		cout << res[itr] << "\t";
	}
	return 0;
}