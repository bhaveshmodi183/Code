#include<bits/stdc++.h>
using namespace std;
// CASE :2
void printmap(map<int,string> &m)
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
    map<int,string> m;
    m[5] = "Ayush" ;             // time complexity of insertion and accesing of elements in map is O(logn)
    m[1] = "Bhavesh" ;
    m[4] = "Chaman" ;
    m[3] = "Arpit" ;
    m[6] = "Anubhav" ;
    m[2] = "Ashutosh" ;
    m[8];                                   //<-- this single declaration will also has time complexity of O(logn)

    m.insert(make_pair(2, "Aman"));    // or we can use this line also --> m.insert({2,"Aman"}) ;  
    printmap(m);

//CASE: 1
    // first method to print value in map using simple for loop 
    /*
    map<int,string> :: iterator it;
    for (it = m.begin(); it != m.end() ; it++)
    {
        cout<< (*it).first <<" "<< (*it).second<<endl;
    }
    cout<<endl;
    */ 


// CASE : 3
    auto it= m.find(4);         // this will also has time complexity of o(logn)
    // if(it==m.end())
    // {
    //     cout<<"\nNo value ";
    // }
    // else{
    //     cout<<"\n"<<(*it).first<<" "<<(*it).second<<endl;
    // }

// CASE : 4
    m.erase(3);                 // time complexity is o(logn)
    printmap(m);   
    
}