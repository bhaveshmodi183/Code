/* PROGRAM TO PRINT NUMBER OF CONNECTED COMPONENTS 

#include<bits/stdc++.h>
using namespace std;
const int N=1e5 + 10;

bool vis[N];
vector<int> g[N];
 
void dfs(int vertex)
{
    // STEP 1 : Take action on vertex after entering the vertex 

    vis[vertex]=true;
    for(int child : g[vertex])
    {
        if(vis[child]) continue;
        //  STEP 2 : Take action on child before entering the child node 

        dfs(child);

        //  STEP 3 : Take action on child after exiting child node 
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        else
        {
            dfs(i);
            ct++;
        }
    }
    cout<<ct<<endl;
}

*/


/*     PROGRAM TO PRINT CONNECTED COMPONENETS  

#include<bits/stdc++.h>
using namespace std;
const int N=1e5 + 10;

bool vis[N];
vector<int> g[N];
vector<vector<int>> cc;
vector<int> current_cc;
 
void dfs(int vertex)
{
    //  STEP 1 : Take action on vertex after entering the vertex 

    vis[vertex]=true;
    current_cc.push_back(vertex);
    for(int child : g[vertex])
    {
        if(vis[child]) continue;
        // STEP 2 : Take action on child before entering the child node 

        dfs(child);

        //  STEP 3 : Take action on child after exiting child node 
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
    }
    cout<<cc.size()<<endl;
    for(auto c_cc : cc)
    {
        for(int vertex : c_cc)
        {
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
}
*/