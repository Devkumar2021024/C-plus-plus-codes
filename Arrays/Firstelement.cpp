#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 3, 4, 5,2};
    int size = 9;

     unordered_map<int,int>coutarr;
    for (int i = 0; i < size; i++)
    {
        coutarr[arr[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (coutarr[arr[i]] >= 2)
        {
            int ans = arr[i];
            cout << ans << " ";
            break;
        }
    }
    // cout << ans;
}