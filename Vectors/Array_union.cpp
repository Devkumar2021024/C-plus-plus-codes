#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {2, 4, 56, 2, 8, 9};
    int b[] = {667, 543, 12, 34};

    vector<int> dev;

    for (int i = 0; i < (sizeof(a)/sizeof(int)); i++)
        dev.push_back(a[i]);

    for (int i = 0; i < (sizeof(b)/sizeof(int)); i++)
        dev.push_back(b[i]);

    cout << " Mergerd array : ";
    for (int i = 0; i < dev.size(); i++)
        cout << dev[i] << " ";
}