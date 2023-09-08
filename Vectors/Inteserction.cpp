#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    vector<int> b = {12, 3, 5, 123, 8};

    vector<int> dev;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                b[j] = -1;
                dev.push_back(b[j]);
            }
        }
    }
    cout << " Intersectedd array : ";
    for (int i = 0; i < dev.size(); i++)
        cout << dev[i] << " ";
}