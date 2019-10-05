#include <iostream>
using namespace std;
int main() {
	string fullLine;
	string str1 = "Nothing";
	cin >> str1;
	cin.ignore();
	getline(cin, fullLine);
	cout << "Single String " << str1 << endl << "FullLine " << fullLine << endl;
}