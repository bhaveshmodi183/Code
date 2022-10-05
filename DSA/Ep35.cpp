#include<bits/stdc++.h>
using namespace std;
int main()
/*           FOR ARRAYS 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr= lower_bound(a,a+n,5);
    int *ptr= upper_bound(a,a+n,5);
    if(ptr==a+n)
    {
        cout<<"Not found";
    }
    cout<<(*ptr)<<endl;
}
*/

/* FOR VECTORS

{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto it=upper_bound(v.begin() , v.end() , 26);
    // auto it=lower_bound(v.begin() , v.end() , 26);   
    if(it==v.end())
    {
        cout<<"Not Found";
    }
    cout<<*it<<endl;
}
*/

{
    int n;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    // SET AUTOMATICALLY SORTED SO NO NEED TO SORT THIS
    // auto it = lower_bound(s.begin() , s.end() , element name ) --> this is incorrect because it is of order o(n^2)

    for(int i=0;i<n;i++)
    {
        auto it= s.lower_bound(5);
    }
}