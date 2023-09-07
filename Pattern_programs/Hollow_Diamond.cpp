#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : " ;
    cin >> n;

    for (int row = 0; row <= n; row++)
    {
        cout <<" ";
        for (int space = n - row - 1; space >= 0; space--)
        {
            cout << " ";
        }

        for(int j = 0; j<=2*row; j++ )
        {
            if(j==0 || j==2*row)
                   cout <<"*";
            else 
                cout <<" ";       
        }
        cout << endl;
    }

    for (int row = 0; row <= n; row++)
    {
        for (int space = row; space >= 0; space--)
        {
            cout << " ";
        }

        for(int j = 0; j<=2*n - 2*row; j++ )
        {
            if(j==0 || j==2*n-2*row)
                   cout <<"*";
            else 
                cout <<" ";       
        }
        cout << endl;
    }
}