#include <bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

/*

Case : 1

    int
    main()
{
    for (int i = 0; i <= 8; i++)
    {
        printbinary(i);
        if (i & 1)
        {
            cout << "odd\n";
        }
        else
        {
            cout << "even\n";
        }
    }
}
*/

/*

Case : 2

    int
    main()
{
    int n = 5;
    cout << (n >> 1) << endl; // right shift one means division of 5 by 2
    cout << (n << 1) << endl; //  left shift one means multiplication of 5 by 2
}

*/


