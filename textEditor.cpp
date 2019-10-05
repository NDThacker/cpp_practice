#include <iostream>
#include <vector>
#include <string>
// #include <cstring>

using namespace std;

int runQuery(const int qrs, int &cur, vector<char> stk, string addStr = "", int remove = 0)
{
	if (addStr != "")
	{
		cur++;
		for (auto ch : addStr)
		{
			stk.push_back(ch);
		}
	}
	else if (remove != 0)
	{
		cur++;
		for (int k = 0; k < remove; k++)
		{
			stk.pop_back();
		}
	}
	int choice, dels;
	string inchars;
	while (cur < qrs)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> inchars;
			cur = runQuery(qrs, cur, stk, inchars);
			break;
		case 2:
			cin >> dels;
			cur = runQuery(qrs, cur, stk, "", dels);
			break;
		case 3:
			cin >> dels;
			cout << stk.at(dels - 1) << endl;
			cur++;
			break;
		case 4:
			cur++;
			return cur;
		}
	}
	return qrs;
}

int main()
{

	vector<char> stk;
	int z = 0;
	int &cur = z;
	int qrs;

	cin >> qrs;

	z = runQuery(qrs, cur, stk);

	return 0;
}