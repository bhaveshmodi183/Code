//  Vectors in C++ STL 

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    cout<<"Size: "<<v.size()<<endl;    // Complexity of function size() is O(1).
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

/* 
CASE : 1

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;       // input values in vector 
        cin>>x;

      //  printvec(v);    // run this to get better understanding about how vectors are dynamic. here vector changes its size after each input element dynamically.

        v.push_back(x);   // will push_back the values at the last . complexity of function push_back is O(1).
    }
    printvec(v);
}
*/


/*
Case :2 

int main()
{
    // vector<int> v(10);
    vector<int> v(10,3);
    v.push_back(7);   // add new element to vector at the last position 
    printvec(v);
    v.pop_back();    // will remove the last element from the vector
    printvec(v);
}
*/

/*
 Case : 3
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);

    vector<int> v2=v;    //here we can eaisly copy the vectors from one to another and its time complexity is O(N).
    v2.push_back(8);     // here the copy of vector v is copy in the vector v2 and any change in v2 will not reflect in v.
    printvec(v);
    printvec(v2);
}
*/

/*
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);

    vector<int> &v2=v;    //here we can eaisly copy the vectors from one to another and its time complexity is O(N).
    v2.push_back(8);     // here the copy of vector v is copy in the vector v2 and any change in v2 will not reflect in v.
    printvec(v);
    printvec(v2);
    v2.push_back(9);
    printvec(v2);
}

*/