// GIVEN N STRINGS AND Q QUERIES. IN EACH QUERY YOU ARE GIVEN A STRING PRINT YES IF STRING IS PRESENT ELSE 
// PRINT NO

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0 ; i<n ;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string str;
        cin>>str;
        if(s.find(str)==s.end())
        {
            cout<<"No\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}