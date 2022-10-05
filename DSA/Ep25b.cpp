// Given N strings, print N strings in lexiographical order with their frequency
// N <= 10^5
// |S| <= 100

#include<bits/stdc++.h>
using namespace std;
const int N=1e5 ;

int main() 
{
    map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;     // or we can write " m[s] = m[s] +1 "  since map stores unique key pairs so we are increasing counter or m[s] value to get the frequency of string in a map
    }

    for(auto pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}