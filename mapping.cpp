#include <map>
#include <bits/stdc++.h>

using namespace std;
int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0;
    map<int, int> freq;
    
    for(int ind = 0; ind < sizeof_array; ind++)
        freq[arr[ind]] = freq[arr[ind]] + 1;
    for(auto ind = freq.begin(); ind !=freq.end(); ind++)
        if (ind->second == f) count++;
    return count;
    
}

int main()
{
	int sample[] = {1, 4, 1, 4, 4, 1};
	cout << countSpecials(sample, 6, 2);
	return 0;

}