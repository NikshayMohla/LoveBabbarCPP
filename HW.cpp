#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {66,78,5,44,3};
    int s = 0;
    int e = 4;
    int temp = 0;
    while (e >= s)
    {
        int temp = arr[s];
        int temp2 = arr[e];
        arr[e] = temp;
        arr[s] = temp2;
        e--;
        s++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
    
}