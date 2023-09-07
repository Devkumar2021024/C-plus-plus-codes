#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows = ";
    cin >> n;

    for(int row = 0; row <= n; row++)
    {
        
        for(int j = 0; j <=row; j++)
        {
            cout << " ";
        }
        for(int star = n-row-1; star>=0; star--)
        {
            cout <<"* ";
        }
       
        cout << endl;
    }
    return 0;
}