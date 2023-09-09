#include <iostream>
#include <vector>
using namespace std;
void maxmin(int arr[][100], int m, int n)
{
    int min = INT16_MAX, max=INT16_MIN;
    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
           if(arr[row][column]> max)
               max = arr[row][column];
        }
    }
     for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
           if(min >arr[row][column])
               min = arr[row][column];
        }
    }

    cout << "MAX AND MIN ELEMENTS ARE : " << max << " , "<< min;
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

    maxmin(arr, m,n);
   
}