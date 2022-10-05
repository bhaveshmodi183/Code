#include<bits/stdc++.h>
using namespace std ;

// ITERATORS POINTING VECTORS

/*
int main()
{
    vector<int> v={5,4,3,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it;       // iterator initialization syntax
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<endl;          // (*it) will print the value in the vector 
    }
    cout<<endl;
}
*/

// ITERATOR POINTING PAIRS

int main()
{
    vector <pair<int,int>> V_pair={{6,7},{2,3}.{4,5}};
    vector <pair<int,int>> :: iterator ite;
    for( ite = V_pair.begin() ; ite != V_pair.end() ; ite++)
    {
        cout<<(*ite).first<<" "<<(*ite).second<<endl;
    }
    cout<<endl;
}