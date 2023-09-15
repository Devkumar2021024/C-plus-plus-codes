#include <iostream>
#include <vector>
using namespace std;
int Binary(vector<int> a, int size, int target)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (target == a[mid])
            return mid;
        else if (target > a[mid])
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> a = {1, 2, 3, 5, 6, 7, 22, 35, 543};
    int target;
    cout << "Enter the target : ";
    cin >> target;

    if (Binary(a, a.size(), target))
        cout << "Found at index : " << Binary(a, a.size(), target);
    else
        cout << "Not found";
}