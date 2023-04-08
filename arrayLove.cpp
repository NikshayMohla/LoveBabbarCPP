#include <iostream>
using namespace std;
void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = i+j;
    while (i < n && j < m)
    {
        if (arr1[i+j] < arr2[j])
        {
            arr1[k++] = arr1[i++];
        }
        else
        {
            arr1[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr1[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr2[k++] = arr2[j++];
    }
}
void printArray(int arrrr[], int n2)
{
    for (int i = 0; i < n2; i++)
    {
        cout << arrrr[i];
    }
}
int main()
{

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    mergeArray(arr1, 5, arr2, 3, arr3);

    printArray(arr3, 8);

    return 0;
}