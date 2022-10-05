/* This is for sqaure root of a number 

#include<bits/stdc++.h>
using namespace std;
double eps=1e-7;
int main()
{
    int x;
    cin>>x;
    double lo=1,hi=x,mid;    
    while(hi-lo>eps)
    {
        mid=(hi+lo)/2;
        if(mid*mid<x)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<lo<<" "<<hi<<endl;
    cout<<pow(x,1.0/2);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
double eps=1e-7;
double multiply(double mid,int n)
{
    double ans=1;
    for (int i = 0; i < n; i++)
    {
        ans*=mid;
    }
    return mid;  
}
int main()
{
    double x;
    int n;
    cin>>x>>n;
    double lo=1 , hi=x ,mid;
    while(hi-lo>eps)
    {
        mid=(lo+hi)/2;
        if(multiply(mid,n)<x)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<lo<<" "<<hi<<endl;
    cout<<pow(x,1.0/n)<<endl;
}