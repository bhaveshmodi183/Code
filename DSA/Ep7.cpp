#include<bits/stdc++.h>
using namespace std;

/*
int digit_sum(int n)
{
    int digit_sum=0;
    while(n)
    {
        digit_sum=digit_sum+n%10;
        n=n/10;
    }
    return digit_sum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<digit_sum(a)+digit_sum(b);
    return 0;
}
*/

/*
void increment(int n) // it is "call by value" so the value of a copy in the function increment and its value not change  in the main function.
{
    n++;
}
int main()
{
    int a=3;
    cout<<a<<endl;            
    increment(a);
    cout<<a<<endl;
}
*/

void increment(int &n)   // here it is call by reference so the changed value also get relected in the main function.
{
    n++;
}
int main()
{
    int a=3;
    cout<<a<<endl;
    increment(a);
    cout<<a<<endl;
}
