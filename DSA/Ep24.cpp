#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int> v={2,3,4,5,6};
    // 1 method to access the elements in the vector :   normal via for loop
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" " ;
    }
    cout<<endl;

    // 2 method to access the elements in vector using iterators
    // vector<int> :: iterator it;   instead of writing this whole line we can use auto keyword in below 
    // AUTO : this keyword automatically consider the data type of element ******************

    for(auto it = v.begin() ; it != v.end() ; it++ )    // here auto keyword consider that it is iterator of vector v
    {
        cout<< (*it) <<" ";
    }
    cout<<endl;

    // 3 method to access the elements in vector using RANGE BASED LOOP
    for(int value : v)
    {
        cout<< value<<" ";
    }
    // here in range based loop the value of elements in vector is copied in the datatype VALUE 
    cout<<endl;

    for(int &value : v)   // here actual value of vector elements comes in value datatype due to '&' reference
    {
        value++;
    }

    cout<<"\nThe value of each element of vector is increment by 1 as we pass the value by reference in previous loop :"<<endl;
    for(int value : v)
    {
        cout<< value<<" ";
    }
    cout<<endl;

    

}