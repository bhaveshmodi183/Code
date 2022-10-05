// SELECTION SORT 
// * it is simple sorting algorithm based on inplace comparision. in this array or element list is divided into two parts sorted and unsorted part. the sorted part is at left side and the unsorted part at the right side. initially sorted part is empty and unsorted part is the entire list. the smallest element is selected from the unsorted array and swaped with the leftmost element and that element becomes part of sorted array. this process continues movingn unsorted array boundary by one element to the right.
/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    // Main logic for selection sort

    for(int i=0; i<n; i++)
    {
        int minindex=i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
    }

    //Logic ends

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

*/

// Merge sort

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];

// function for merging the sorted list
void merge(int l,int r, int mid)
{
    int l_size = mid - l +1 ;
    int L[l_size  +1] ;

    int r_size= r - mid ;
    int R[r_size + 1 ];

    for(int i = 0; i < l_size ; i++)
    {
        L[i] = a[i+l];
    }
    for(int i = 0; i < r_size ; i++)
    {
        R[i] = a[i + mid + l];
    }

    L[l_size] = R[r_size] = INT_MAX;
    int l_i=0;
    int r_i=0;
    for(int i = l ; i <= r ; i++)
    {
        if(L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            l_i++;
        }
        else{
            a[i] = R[r_i];
            r_i++;
        }
    }
}

//funciton for sort using recursion

void mergesort(int l , int r)
{
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i< n; i++)
    {
        cin>>a[i];
    }
    mergesort(0,n-1);
    for(int i = 0; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}