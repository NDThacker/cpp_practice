#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	//vector <int> vint {1, 2, 3, 4};

	auto b = "string";
	int bi = 3;
	double bd = 3.4;
	cout << typeid(bd).name() << endl;

}