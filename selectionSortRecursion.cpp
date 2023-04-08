#include <iostream>
using namespace std;
void selection(int *arr, int n)
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
        int minIndex = i;
        if (arr[minIndex] > arr[i + 1])
        {
            minIndex = i + 1;
        }
        swap(arr[minIndex], arr[i]);
    }
    selection(arr + 1, n - 1);
}
int main()
{
    int arr[5] = {4, 1, 9, 2, 3};
    selection(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}