#include <iostream>
using namespace std;
bool Checkprime(int num)
{
     int factor = 0;
    if(num<2){
        return false;
    }
    for(int i = 2;i<num;i++){
        if(num%i==0){
            factor++;
            break;
        }
    }
    if(factor==1){
        return false;
    }
    else{
        return true;
    }
    
}

int PrintPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (Checkprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of prime you want to print upto : ";
    cin >> n;

    PrintPrime(n);
}
