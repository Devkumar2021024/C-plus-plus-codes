#include <iostream>
#include <vector>
using namespace std;
int Missing_element(int arr[], int size)
{ for (int i = 0; i < size; i++)
{
    int index = abs(arr[i]);
    if(arr[index-1]>0)
             arr[index-1] =  -(arr[index-1]);
}
for (int i = 0; i < size; i++)
{
    if(arr[i]>0)
           return (i+1);
}

}
int main()
{
    int arr[100] = {1,2,2,4,5,6,7};
    int size = 7;
    cout << "Missiing element : " << Missing_element(arr, size);
}