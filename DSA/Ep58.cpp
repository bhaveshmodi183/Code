#include<bits/stdc++.h>
using namespace std;

// brute force code 
/*

int main()
{
    int n;
    cin>>n;
    if( n == 1)
    {
        cout<<0<<endl;
    }
    bool is_prime = true;
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            is_prime = false;
            break;
        }
    }
    cout<<is_prime;
}

Time complexity of above is O(n)
*/

/*
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"Not\n";
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not\n";
            break;
        }
        else
        {
            cout<<"Prime\n";
            break;
        }
    }
}

// Complexity is O(root n)
*/



// Prime Factorisation

/*
Brute force code of order of n time complexity

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> prime_factors;
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n/=i;
        }
    }
    for(int prime: prime_factors)
    {
        cout<<prime<<" ";
}

*/

int main()
{
    int n;
    cin>>n;
    vector<int> prime_factors;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n/=i;
        }
    }
    if(n>1)
    {
        prime_factors.push_back(n);
    }
    for(int prime: prime_factors)
    {
        cout<<prime<<" ";
    }
}

// O(root n) complexity 
