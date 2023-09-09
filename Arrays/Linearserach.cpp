#include <iostream>
#include <vector>
using namespace std;
bool Findkey(int arr[][100], int m, int n, int key)
{
    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
            if (arr[row][column] == key)
            {
                cout << "At position row : " << row << " column : " << column;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[100][100];
    int m, n, key;
    cout << "Enter rows and columns : ";
    cin >> m >> n;

    cout << "Enter elements of array : " << endl;
    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
            cin >> arr[row][column];
        }
    }
    cout << endl;
    cout << "Enter the key : " ;
    cin >> key;
    if (Findkey(arr, m, n, key))
    {
        cout <<endl << "Found !!";
    }
    else
    {
        cout << "Not present";
    }
}