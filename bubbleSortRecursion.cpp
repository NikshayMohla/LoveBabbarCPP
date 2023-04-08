#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[5] = {4, 3, 6, 1, 99};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}