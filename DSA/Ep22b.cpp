#include<bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int>> &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(10);
        }
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
    cout<<v[0][1];
}