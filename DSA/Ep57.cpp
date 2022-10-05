#include<bits/stdc++.h>
using namespace std;
int main()

//BRUTE FORCE CODE
/*
{
    int n;
    cin>>n;
    int ct=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            ct++;
            sum+=i;
        }
    }
    cout<<ct<<" "<<sum<<endl;
    // HERE THE TIME COMPLEXITY IS O(n)
}
*/

/*

{
    int n;
    cin>>n;
    int ct=0,sum=0;
    for(int i = 1; i * i <= n ; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<n/i<<endl;
            ct+=1;
            sum+=i;
            if(n/i!=i)
            {
                sum+=n/i;
                ct+=1;
            }
        }
    }
    cout<<ct<<" "<<sum<<endl;
}

Here the time complexity is O(sqrt(n))
*/
