//  Given a number N print its factorial 
//  Constraints 
//  1<= N <=100
//  print answer Module M
//  where M=47

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     long long fact=1;
//     int M=47;
//     for (int i = 2; i <=n; i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
//     return 0;
// }

// Take input as first 20 and 21.                                           READ DESCRIPTION IN NOTES 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long fact=1;
    int M=47;
    for (int i = 2; i <=n; i++)
    {
        fact=(fact*i)%M;
    }
    cout<<fact;
    return 0;
}