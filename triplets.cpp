#include <cstdlib>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

bool findTriplets(int arr[], int n)
{ 
    //Your code here
    sort(arr, arr + (sizeof(int)*n / sizeof(arr[0])));
    int i = 0, k = n - 1, j, sum;
    bool res = false;
    for (i = 0; i < n-1; i++)
    {
        sum = 0;
        j = i + 1;
        k = n - 1;
        while (j < k)
        {
            sum = arr[i] + arr[j] + arr[k];
            // cout << sum << "here";
            if (sum == 0) 
            {
                res = true;
                break;
            }
            else if (sum > 0) k--;
            else j++;
        }
        if(res) break;
    }
    return res;
    
}

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int arr[n] = { 0 };
		for (int ind = 0; ind < n; ind ++)
			cin >> arr[ind];
		if(findTriplets(arr, n))
			cout << 1;
		else cout << 0;
	}

}