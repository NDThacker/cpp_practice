#include <vector>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int findMax(vector<int> inVec)
{
	int maxEle = 0;

	for (auto itr = inVec.begin(); itr != inVec.end(); itr++)
	{
		if (*itr > maxEle)
			maxEle = *itr;
	}
	return maxEle;
}

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int noQ = 0, query = 0, queryNo = 0, newEle = 0, maxEle = 5;
	char *toks;
	string qString = "1 23";
	cin >> noQ;
	cin.ignore();
	vector<int> stk;
	int top = -1;
	while (query < noQ)
	{
		getline(cin, qString);
		toks = strtok(&qString.front(), " ");
		while (toks)
		{
			if (strcmp(toks, "1") == 0)
			{

				queryNo = 1;
				toks = strtok(NULL, " ");
				newEle = stoi(toks);
			}
			else if (strcmp(toks, "2") == 0)
			{
				queryNo = 2;
			}
			else
			{
				queryNo = 3;
			}
			break;
		}
		if (queryNo == 1)
		{
			maxEle = (maxEle > newEle ? maxEle : newEle);
			top++;
			stk.push_back(newEle);
		}
		else if (queryNo == 2)
		{
			if (stk.at(top) == maxEle)
			{
				stk.pop_back();
				maxEle = findMax(stk);
			}
			else
			{
				stk.pop_back();
			}
			top--;
		}
		else
		{
			cout << maxEle << endl;
		}
		query++;
	}
	return 0;
}
