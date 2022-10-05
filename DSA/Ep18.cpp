// SUM OF ARRAY

// sum(n-1, a) --> SUM OF ELEMENTS IN ARRAY a UPTIL n INDEX 

// sum(number of elements , array)= a[n] + sum(n-1, a)

// #include<iostream> 
// using namespace std;

// int sum(int n,int a[])
// {
//     if(n < 0) return 0;
//     return sum(n-1, a) + a[n];  
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[n];
//     }
//     cout<<sum(n,a);
//     return 0;
// }


// digit sum of n
// digit_sum(n) = digit_sum(n/10) + last_digit (n%10) 

#include<iostream>
using namespace std;
int digit_sum(int n)
{
    if( n==0 ) return 0;
    return digit_sum(n/10) + (n%10);
}

int main()
{
    int n;
    cin>>n;
    cout<<digit_sum(n);
    return 0;
}