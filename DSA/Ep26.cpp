#include<bits/stdc++.h>
using namespace std;

void printmap(unordered_map<int,string> &m)
{
    cout<<"\nSecond method to print mp elements using RANGE BASE LOOP along with AUTO keyword"<<endl;
    // second method to print mp elements using RANGE BASE LOOP along with AUTO keyword
    for( auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl; 
    }
    cout<<endl;
}
int main()
{
    unordered_map<int,string> m;
    m[1] = "abc";
    m[7] = "def";
    m[3] = "hij";
    m[3] = "ghi";
    m[2] = "fgh";
    m[8] = "def";

    // auto it=m.find(7);
    // if(it!=m.end())
    // m.erase(it);
    printmap(m);
}