#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows = ";
    cin >> n;

    for(int row = 0; row <= n; row++)
    {
        for(int space = n-row+1; space>=0; space--)
        {
            cout <<" ";
        }
        // stars
        for(int j = 0; j <=row; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}