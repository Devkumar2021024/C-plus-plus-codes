#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int First(vector<int> a, int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (a[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (target > a[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}
int Last(vector<int> a, int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (a[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target > a[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9,9};
    int first = First(a, a.size(), 9);
    int last = Last(a, a.size(), 9);
    cout << (last-first)+1 << endl;
}