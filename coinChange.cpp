#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    long long int sumC, cs;
    cin >> cs >> sumC;
    long long int coins[cs];
    long long int table[sumC + 1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for(long long int idx = 0; idx < cs; idx++)
        cin >> coins[idx];
    
    long long int ci, aSum;
    
    for(ci = 0; ci < cs; ci++)
    {
        for(aSum = coins[ci]; aSum <= sumC; aSum++)
            table[aSum] += table[aSum - coins[ci]];
    }
    cout << table[sumC];
    
}
