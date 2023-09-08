#include<iostream>
using namespace std;
int Findelement(int arr[], int n, int e)
{
     for(int i=0; i<n; i++)
     {
        if(arr[i] == e)
                 return i;
     }
     return false;
}
int main()
{
   int arr[1000], n,e;
   cout << "Enter number of elements in an array : ";
   cin >> n;

   for(int i = 0; i<n; i++)
   {
    cout << "arr[" << i <<"] : ";
        cin >> arr[i];
   }

   cout <<"Enter element you wnt to search : ";
   cin >> e;

   if(Findelement(arr, n, e))
   {
     cout<< "Element " << e << " found on index :"<< Findelement(arr, n, e);
   }
   else{
    cout <<"Not found";
   }

  

}