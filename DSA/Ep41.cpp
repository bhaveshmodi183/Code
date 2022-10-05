/* LOWER BOUND

#include <bits/stdc++.h>
    using namespace std;
int lower_bound(vector<int> &v, int element)
{
    int l = 0, h = v.size() - 1;
    int mid;
    while (h - l > 1)
    {
        mid = (l + h) / 2;
        if (v[mid] < element)
        {
            l = mid + 1;
        }
        else
        {
            h = mid;
        }
    }
    if (v[l] >= element)
    {
        return l;
    }
    if (v[h] >= element)
    {
        return h;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int element;
    cin >> element;
    int l = lower_bound(v, element);
    cout << l << " " << v[l] << endl;
    return 0;
}
*/

// UPPER BOUND 

#include <bits/stdc++.h>
    using namespace std;
int upper_bound(vector<int> &v, int element)
{
    int l = 0, h = v.size() - 1;
    int mid;
    while (h - l > 1)
    {
        mid = (l + h) / 2;
        if (v[mid] <= element)
        {
            l = mid + 1;
        }
        else
        {
            h = mid;
        }
    }
    if (v[l] > element)
    {
        return l;
    }
    if (v[h] > element)
    {
        return h;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int element;
    cin >> element;
    int l = upper_bound(v, element);
    cout << l << " " << v[l] << endl;
    return 0;
}