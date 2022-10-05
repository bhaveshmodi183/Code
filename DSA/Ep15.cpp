// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e7+10;
// int ar[N];
// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     while (m--)
//     {
//         int a,b,d;
//         cin>> a >> b >> d;
//         for(int i=a ;i<=b;i++)
//         {
//             ar[i]=ar[i]+d;
//         }
//     }
//     long long mx= -1;
//     for (int i = 1; i < n; i++)
//     {
//         if(mx<ar[i])
//         {
//             mx= ar[i];
//         }        
//     }
//     cout<<mx<<endl;
// }

// O( M* N + N ) = 2 * 10^5 * 10^7 --> 2*10^12
// WILL NOT RUN IN ONE SECOND 

// NOW WE HAVE TO OPTIMIZED THE CODE BY APPLYING PRE COMPUTATION TECHNIQUE

#include<bits/stdc++.h>
using namespace std;
const int N=1e7 +10;
int ar[N];
int main()
{
    int m,n;
    cin>>m>>n;
    while(m--)
    {
        int a,b,d;
        for (int i = 1; i <= n; i++)
        {
            ar[i]=ar[i] + ar[i-1];
        }
        long long mx = -1;
        for(int i=1; i<=n;i++)
        {
            if(mx<ar[i])
            {
                mx=ar[i];
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
