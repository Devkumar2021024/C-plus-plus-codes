#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void wave(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();

    for (int sc = 0; sc < col; sc++)
    {
        // even column
        if ((sc & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << v[i][sc] << " ";
            }
        }
        // odd column
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << v[i][sc] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 67},
        {9, 54, 7, 5, 1},
        {1, 1, 1, 1, 1},
        {7, 5, 4, 3, 1}};

    wave(v);
}