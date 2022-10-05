// SET  IS A DATA STRUCTURE IN STL WHICH SOTRES UNIQUE KEY VALUES IN AN SORTED ORDER 


#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s)
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
// int main()
// {
//     set<string> s;
//     s.insert("abc");        // insertion time complexity is O(logn)
//     s.insert("def");
//     s.insert("bhavesh");
//     s.insert("ghi");
//     s.insert("efg");

//     s.erase("abc"); // to erase the element            // erase time complexity is O(logn)
//     print(s);
// }


// GIVEN N STRINGS PRINT UNIQUE STRINGS IN LEXIOGRAPHICAL ORDER 
// N<= 10^5
// |S|<= 100000

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto value : s)
    {
        cout<<value<<endl;
    }
}