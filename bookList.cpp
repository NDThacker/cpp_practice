#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int noB, borrows, bookNo;

	vector<int> bList;
	cin >> noB;

	for(int ind = 0; ind < noB; ind++)
	{
		cin >> bookNo;
		bList.push_back(bookNo);
	}
	cin >> borrows;
	for(int ind = 0; ind < borrows; ind++)
	{
		cin >> bookNo;
		cout << bList.at(bookNo - 1) << endl;
		bList.erase(bList.begin() + bookNo - 1);
	}
	return 0;
}