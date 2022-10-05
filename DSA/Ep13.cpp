// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// int a[N];

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1 ; i<n ; i++)
//     {
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         long long sum=0;
//         for(int i=l; i<=r; i++)
//         {
//             sum=sum+a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }
// O(N) + O(Q*N)= O(N) + O(N^2)= O(N^2)   THAT IS 10^10 WILL NOT RUN IN 1 SEC AND NOT PASS IN ONLINE COMPILER


// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// int a[N];
// int pf[N];
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1 ; i<n ; i++)
//     {
//         cin>>a[i];
//         pf[i] = pf[i-1] + a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         cout<<pf[r] - pf[l-1]<<endl;
//     }
//     return 0;
// }

// here time complexity is O(N) + O(Q) that is overal complexity will be O(N) --> 10^5 it will run in 1 second.


                // prefix sum in 2D Array
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
long long pf[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n ; j++)
        {
            cin>>ar[i][j];
            pf[i][j]=ar[i][j] + pf[i-1][j] + pf[j-1][i-1] - pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
    }
    return 0;
}


// O(N^2) + O(Q) --> O(N^2) --> 10^6 + 10^5 --> overall it will be 10^6 so this will run in one second 
