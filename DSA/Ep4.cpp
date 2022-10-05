#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int a=5;
//     int b=6;
//     int c=4;
//     cout<<((b>a) && (b>c))<<endl;   // "&&" and operator will give output as true or false in the form of 0 and 1 respectively. if any of the two case is false then the whole result will be false and it will print zero. only true when both the case in and opertor is true.
//   /*   
//     int a=5;
//     int b=3;
//     int c=4;
//     cout<<((b>a) || (b>c));    // "||" or operator will give output as true or false in the form of 0 and 1 respectively. if either of the case is true then the whole result will be true and it will peint 1. only false when both the case in or opertor is false.
 
//  */

//     return 0;
// }  

/*
int main()
{

// if else 
// for loop 
// while loop 
// for loop 
// nested for loop 
// break 
// continue

for (int i = 0; i <=10; i++)
{
    if(i==8)
    {
        // break;    // will break and cant print the rest values
        continue;   // will skip 8 and print rest of the values
    }
    cout<<i<<endl;
}
return 0;
}
*/

/*
int main()
{
for(int i=0;i<=3;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}
*/

/*
int main()
{
while(true)
{
    int x;
    cin>>x;
    if(x==45)
    {
        break;
    }
    cout<<x<<endl;
}
}
*/


int main()
{
    int sum=0;
    int num;
    int ldigit;
    cout<<"\nEnter the number : ";
    cin>>num;
    while(num>0)
    {
        ldigit=num%10;
        sum=sum+ldigit;
        num=num/10;
    }
    cout<<sum<<endl;
}