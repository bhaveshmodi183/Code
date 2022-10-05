// #include<bits/stdc++.h>
// using namespace std;

// void func(int n)
// {
//     if(n==0) return;
//     // cout<<n<<endl;     // it will print 5 4 3 2 1 :- when we write any statement before the function, it will compute simultaneously when fucntion call itself recursively. 

//     func(n-1);
//     cout<<n<<endl;      // it will print 1 2 3 4 5 :- when we write any statement after function , it will compute when function is returning recursion. 

// }
// int main()
// {
//     func(5);
// }

// ********* EVERY RECURSIVE FUNCTION MUST HAVE A BASE CONDITION OTHERWISE IT WILL NOT STOP AND RECURSIVELY CALL ITSELF AGAIN AND AGAIN

// FACTORIAL USING RECURSION
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;    // this is our base condition 
    return fact(n-1)*n;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}

// TO CALCULATE THE TIME COMPLEXITY OF ANY RECURSIVE FUCNTION WE REQUIRE ONLY TWO THINGS 
//1. Number of function calls 
//2. What is complexity of each function
// in above case :
// no. of function call is ------> n
// complexity of each function -----> o(1)   overall = n * o(1)----> O(n)
