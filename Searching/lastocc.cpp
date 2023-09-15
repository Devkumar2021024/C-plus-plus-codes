#include <iostream>
#include <vector>
using namespace std;
int LastOccOcc(vector<int> a, int size, int target)
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
    vector<int> a = {1, 2, 2, 2, 2, 4, 4, 4, 8, 8, 8, 8, 9, 9, 10};
    int target;
    cout << "Enter the target : ";
    cin >> target;

    if (LastOccOcc(a, a.size(), target))
        cout << "Found lst occurance at index : " << LastOccOcc(a, a.size(), target);
    else
        cout << "Not found";
}