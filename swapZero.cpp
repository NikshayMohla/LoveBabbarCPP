#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    int n = 2;
    int arr[2] = {2,1};
    while (j < n)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}