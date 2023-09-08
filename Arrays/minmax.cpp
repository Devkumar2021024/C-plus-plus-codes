#include <iostream>
using namespace std;
void Findminmax(int arr[], int size, int Min, int Max)
{
    for (int i = 0; i < size; i++)
    {
        if (Min > arr[i])
            Min = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }
    cout << "Minimum element : " << Min << endl;
    cout << "Max element: " << Max;
}
int main()
{
    int arr[100];
    int n, Min = INT32_MAX, Max = INT32_MIN;
    cout << "Enter size of the array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    Findminmax(arr, n, Min, Max);
}