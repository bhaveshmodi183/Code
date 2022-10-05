// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         int a[n+10];
//         for(int i=1;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//             int gc=0;
//             for(int i=1;i<=l-1;i++)
//             {
//                 gc= __gcd(gc, a[i]);
//             }
//             for(int i=r+1;i<=n-1;i++)
//             {
//                 gc= __gcd(gc, a[i]);
//             }
//             cout<< gc << endl;
//         }
//     }
//     return 0;
// }

      // the time complexity of above program is o(t * (n+q*(n))) = o(t*n+t*n*q)
      // O(n^3) --> 10^6


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        for( int i = 1; i<=n ; i++) 
        {
            forward[i] = __gcd(forward[i-1] , a[i] );
        }
        for( int i = 1; i<=n ; i++) 
        {
            backward[i] = __gcd(backward[i+1] , a[i] );
        }
        int q;
        cin>>q;
        while(q--)
        {
            int l,r;
            cin >> l >> r;
            cout<<__gcd(forward[l-1], backward[r-1]);
        }
    }

    // O( t* (N+N)) = 10^6