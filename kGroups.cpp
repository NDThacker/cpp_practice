/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>

using namespace std;

int main()
{
    int tests, mG, size, modV, itrs, indx;
    string inStr, res = "";
    
    cin >> tests;
    
    while(tests--)
    {
		res = "";
        cin >> inStr >> mG;
        size = inStr.length();
        modV = size % mG;
		if(mG == 1)
		{
			for(indx = 0; indx < size - 1; indx++)
				cout << inStr[indx] << "-";
			cout << inStr[indx] << endl;
			continue;
		}
        if(modV == (mG - 1) || modV == 0)
        {
            if(modV == (mG - 1) && (size / mG + 1 >= mG))
            {
                indx = 0;
                itrs = size / mG + 1;
                while(itrs > 1)
                {
                    res += (inStr.substr(indx, mG)) + "-";
                    indx += mG;
					itrs--;
                }
                res += (inStr.substr(indx, modV));
            }
            else if(modV == 0 && (size / mG >= mG))
            {
                indx = 0;
                itrs = size / mG;
                while(itrs > 1)
                {
                    res += (inStr.substr(indx, mG)) + "-";
                    indx += mG;
					itrs--;
                }
                res += (inStr.substr(indx, mG));
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
        cout << res << endl;
    }
}
