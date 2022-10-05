#include <bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printbinary(n);
    int i = 3;

    if ((n & (1 << i)) != 0)
    {
        cout << "Set Bit\n";
    }
    else
    {
        cout << "Unset Bit\n";
    }

    // To set bit

    printbinary(n | (1 << 1));

    // To unset bit

    printbinary(n & (~(1 << 3)));

    // To toggle

    printbinary(n ^ (1 << 2));

    // To count set or unset bit in a binary number

    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1 << i) != 0))
        {
            ct++;
        }
    }
    cout << ct << endl;
    cout << __builtin_popcount(n) << endl;
}