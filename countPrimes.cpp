#include <iostream>
using namespace std;
int countPrimes(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int k=1;
        if(arr[i+1]%(i+1)==0){

        }
        
    }
}
int main()
{
    int n = 9;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i + 1] = i;
    }
    countPrimes(arr, n);
}