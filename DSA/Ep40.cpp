#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int l = 0, h = n - 1;
    int mid;
    while (h - l > 1)
    {
        int mid = (l + h) / 2;
        if (v[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            h = mid;
        }
    }
    if (v[l] == target)
    {
        cout << l << endl;
    }
    else if (v[h] == target)
    {
        cout << h << endl;
    }
    else
    {
        cout << "not found";
    }

} 