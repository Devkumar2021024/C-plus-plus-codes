#include <iostream>
#include <vector>
using namespace std;
int Peak(int a[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (a[mid] > a[mid + 1])
            e = mid;
        // not mid-1
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return e;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 8, 1};
    int size = sizeof(a) / sizeof(int);

    cout << "At index : " << Peak(a, size);
}