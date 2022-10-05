#include<bits/stdc++.h>
using namespace std;


/*
int main()
{
    int n,i;
    cout<<"\nEnter the size of array: ";
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"\n"<<sum;
    return 0;
}
*/

// 2D array initialization
/*
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
*/

/*
const int n=1e7;     // global decalration of array size and in global declaration the maximum size of an array is 10^7 order therefore it will not show any segmentation error and print the value as 7
int a[n];
int main()
{
    a[n-1]=7;
    cout<<a[n-1];
    return 0;
}

*/


int main()
{
    const int n=1e5;     // local decalration of array size, and in local declaration the maximum size of an array is 10^5 order therefore it will not show any segmentation error and print the value as 7
int a[n];
    a[n-1]=7;
    cout<<a[n-1];
    return 0;
}
