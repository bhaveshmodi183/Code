                                                // PART 1
// #include<bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// int main()
// {
//     int t;
//     cin>>t;
//     while ((t--))
//     {
//         int n;
//         cin>>n;
//         long long fact=1;
//         for(int i = 2; i <= n; i++)
//         {
//             fact = ( fact * i )%M;
//         }
//         cout<<fact<<endl;
//     }
//     return 0;
// }

// HERE TIME COMPLEXITY IS :-->      O(T*N)  i.e.   O(N^2) it will not run is 1 second as it will exced time limit 10^5*10^5  that is 10^10



// #include<bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e5 + 10;
// long long fact[N];

// int main()
// {
//     fact[0] = fact[1] = 1;
//     for(int i=0; i<=N; i++)
//     {
//         fact[i] = fact[i-1] * i;
//     }
//     int t;
//     cin>>t;
//     while ((t--))
//     {
//         int n;
//         cin>>n;
//         cout<<fact[n]<<endl;
//     }
//     return 0;
// }

// HERE WE HAVE PRE COMPUTED THE VALUES OF ALL THE FACTORIAL IN GIVEN RANGE FROM ONE TO 10^5 AND STORED IN AN ARRAY NAMED FACT[N]. SO WE NEED NOT TO CALCULATE THE VALUE OF INPUTS INSIDE THE TEST CASE

// TIME COMPLEXITY WILL BE-->    O(N) + O(T) = 10^5 + 10^5 = 2* 10^5  SO IT WILL BE EXUCTE IN ONE SECOND HEMCE IN THIS WAY WE HAVE REDUCE TIME COMPLEXITY OF OUR PROGRAM BY PRE COMPUTATION TECHNIQUE.


                                    //PART
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}    
// HERE TIME COMPLEXITY IS :-->      O(T*N)  i.e.   O(N^2) it will not run is 1 second as it will exced time limit 10^5*10^5  that is 10^10
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
int hsh[N];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}    
//HERE WE HAVE PRE COMPUTED THE VALUES OF ALL THE ELEMENTS COUNTER IN GIVEN RANGE FROM ONE TO 10^5 AND STORED IN AN
// HASH ARRAY NAMED HASH[N]. SO WE NEED NOT TO CALCULATE THE VALUE OF INPUTS INSIDE THE TEST CASE