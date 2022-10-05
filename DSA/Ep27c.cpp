#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }

    // another way to print the elements of set
    // for(auto it=s.begin() ; it!=s.end() ; it++)
    // {
    //     cout<< (*it) << endl;
    // }
}
int main()
{
    multiset<string> s;
    s.insert("abc");           // in multiset we are allowed to insert same string like abc but in case of
    s.insert("def");          // set or unordered set we cannot insert same string multiple time it store 
    s.insert("bhavesh");      // unique value
    s.insert("abc");
    s.insert("efg");

    // s.erase("abc");     // this will delete abc from all the position
    // but if we want to delete only one string abc from specific position so we use below code

    auto it=s.find("abc");   // o(logn)
    if( it !=s.end())
    {
        s.erase(it);
    }
   
    print(s);
}

