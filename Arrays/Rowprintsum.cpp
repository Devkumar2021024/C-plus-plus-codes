#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[100][100];
    int m, n;
    cout << "Enter rows and columns : ";
    cin >> m >> n;

    cout << "Enter elements of array : ";
    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
            cin >> arr[row][column];
        }
    }
    cout << endl;

    for (int row = 0; row < m; row++)
    {
        int sum = 0;
        for (int column = 0; column < n; column++)
        {
            sum = sum + arr[row][column];
        }
        cout << "Sum of row " << row << " is : " << sum << endl;
    }
}