   // IMPLEMENTATION OF STACK USING C++ STL
   // LIFO Based data structure
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())              // it will return a boolean expression if stack is empty it will return true
    { 
        cout<<s.top()<<endl;
        s.pop();
    }
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");
    while(!q.empty())        // it will return a boolean expression if queue is empty it will return true
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}