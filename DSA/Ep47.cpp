#include<iostream>
using namespace std;
int main()
{
    cout<< INT32_MAX <<endl;
    int a = (1LL<<31) - 1;
    cout << a << endl;
    unsigned int b = (1LL<<32) - 1;
    cout<< b << endl;
}