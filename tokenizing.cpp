#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string mstr;
	int num;
	char *toks;
	getline(cin, mstr);
	//cin >> num;
	cout << "Before tokenizing" << mstr << endl;//<< num;
	toks = strtok(&mstr.front(), " ");
	cout << "before while" << toks << endl;
	while(toks) {
		cout << "In while" << toks << endl;
		if(strcmp(toks, "1") == 0)
		{
			cout << "Got it" << endl;
		}
		toks = strtok(NULL, " ");
	}

	return 0;
}