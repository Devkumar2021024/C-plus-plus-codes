#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> dev = {0, 0, 0,0,0,0,0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0};
    int s = 0;
    int e = dev.size() - 1;

    while (s <= e)
    {
        if (dev[s] == 0)
            s++;
        if (dev[e] == 1)
            e--;
  
        if ((dev[s] == 1 && dev[e] == 0) )
        {
            swap(dev[s], dev[e]);
            s++;
            e--;
        }
    }
    for (int i = 0; i < dev.size(); i++)
        cout << dev[i] << " ";
}