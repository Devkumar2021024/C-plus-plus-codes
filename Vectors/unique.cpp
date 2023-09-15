#include <vector>
#include <iostream>
using namespace std;
int unique(vector<int> check, int size)
{
    int bitmask = 0;
    for (int i = 0; i < check.size(); i++)
    {
        bitmask = bitmask ^ check[i];
    }
    return bitmask;
}

int main()

{
    vector<int> a;
    int size;
    cout << "Enter size of vector : ";
    cin>> size;
    cout << "Enter the elements (must be under size of vector) : ";

    for (int i = 0; i < size; i++)
    {
        cout << "element : " << i << " : " ;
        cin >> a[i];
    }
   cout <<"First unique : "<< unique(a, size);
    
}