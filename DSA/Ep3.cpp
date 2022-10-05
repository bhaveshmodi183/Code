#include<bits/stdc++.h>
using namespace std;
int main()
/* {   
    // MUST READ PRECEDENCE OPERATOR TABLE FROM GOOGLE

    // cout<< 7/2*3<<endl;        
    // cout<< 3*7/2<<endl;
    // cout<<7/2<<endl;
    // cout<<7/2.0<<endl;

    // OVERFLOW IN CALCULATION

        // -10^9    <   int   <   10^9
        // -10^12    <  long int   <   10^12
        // -10^18    <  long long int   <   10^18

        int a=100000;
        int b=100000;
        int c=a*b;        // -10^9    <   int   <   10^9     overflow as the range of int is from -10^9 to 10^9
        cout<<c<<endl;     

        int d=10000;
        int e=10000;
        int f=e*d;        // in range of integer so will print the right output
        cout<<f;     

    return 0;
}  */


{
    int l,b;          // EITHER WE CAN TAKE INPUT AS long long int TO MAKE OUR CODE CORRECT ACCORDING TO THE QUESTION
    cin>>l>>b;
    cout<<l * 1LL * b;   // OR HERE "1LL" WILL CONVERT THE CALCULATION IN long long int SO OUR ANSWER WILL BE CORRECT  
    return 0;
}