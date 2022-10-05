#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,4,7,6,8,5,5,9,5,3};
    // Min and Max element of a function

    int min=*min_element(v.begin(),v.end());
    int max=*max_element(v.begin(),v.end());
    cout<<min<<endl;
    cout<<max<<endl;

    // Accumulate gives the sum of elements of array or vector
    cout<<accumulate(v.begin(), v.end(),7)<<endl;

    // Count function gives , how many times a particular number occurs in the vector or array
    cout<<count(v.begin() , v.end() , 5)<<endl;  

    // Find function return the pointer or iterator of element 
    auto it= find(v.begin() , v.end() , 8);
    if(it!=v.end())
    {
        cout<<*it<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

    // Reverse function will print the vector elements in reverse form
    reverse(v.begin() , v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}