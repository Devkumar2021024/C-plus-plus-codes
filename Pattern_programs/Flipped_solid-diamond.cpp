#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : ";
    cin >> n;

    for (int row = 0; row <= n; row++)
    {
        for (int i = 0; i <= n - row; i++)
            cout << "*";
        // space
        for (int i = 0; i <= 2 * row; i++)
            cout << " ";
        for (int i = 0; i <= n - row; i++)
            cout << "*";

        cout << endl;
    }

    //Lower part
    for (int row = 0; row <= n; row++)
    {
       for (int i = 0; i <= row; i++)
            cout << "*";
        // space
        for (int i = 0; i <= 2*n -2 * row; i++)
            cout << " ";
        for (int i = 0; i <= row; i++)
            cout << "*";

        cout << endl;
    }
}