#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 3, 5, 7, 44, 45, 2, 3, 6};
    int sum;
    cout << "Enther the some you want to find out : ";
    cin >> sum;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == sum)
                cout << "(" << a[i] << " , " << a[j] << ")" << endl;
        }
    }
}