#include <iostream>
#include <vector>
using namespace std;
int Missing(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

// Common difference in binary serach
    while ((e - s) > 1)
    {
        if (a[s] - s != a[mid] - mid)
            e = mid; // Go left
        else if (a[e] - e != a[mid] - mid)
            s = mid; // Go right

        mid = s + (e - s) / 2;
    }
    return a[mid];
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 6,7, 8};

    cout << "Missing element : " << Missing(a) + 1;
}