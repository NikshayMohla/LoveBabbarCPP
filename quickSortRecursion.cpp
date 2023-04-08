#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= arr[i])
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quick(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // partition
    int p = partition(arr, s, e);
    // left
    quick(arr, s, (p - 1));
    // right
    quick(arr, p + 1, e);
}
int main()
{
    int arr[6] = {2, 1, 3, 7, 5, 4};
    quick(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // return 0;
}