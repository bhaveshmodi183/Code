// Pairs and Vecotors in C++ STL
// Pairs 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair< int , string > p;               // pair initialization
    // p=make_pair(2,"Bhavesh");         // pair declaration
  
    p={2,"abc"};                       // another way to declare values in the pair           
    cout<<p.first<<"   "<<p.second<<endl;   // p.first will print the first value of pair and p.second will print second value

    pair<int ,string> &p1=p;        // here if we remove "&" then it will print " 2 abc". it is because of reference 
    p1.first=5;
    cout<<p.first<<"   "<<p.second<<endl;

    pair< int, int> A[3];
    A[0] = {1,2};
    A[1] = {2,3};
    A[2] = {3,4};
    swap(A[0],A[2]);
    for(int i=0;i<3;i++)
    {
        cout<<A[i].first<<" "<<A[i].second<<endl;
    }
}