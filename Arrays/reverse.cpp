#include <iostream>
using namespace std;
void reverse(int arr[], int size, int start, int end)
{
    start = 0, end = size-1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

     cout <<endl << "Reversal : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100];
    int n, start, end;
    cout << "Enter size of the array : ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Previous array input : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    reverse(arr, n, start, end);

}