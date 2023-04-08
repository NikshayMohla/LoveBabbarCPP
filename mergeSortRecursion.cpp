#include <iostream>
using namespace std;
void printArray(int *arr, int s, int e)
{
    for (int i = s; i <=e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid + 1 - s;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    // copy krro values jo array ko do part me divide krke aaye

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{

    // printArray(arr, s, e);
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left wala part sort karna hai
    mergeSort(arr, s, mid);

    // right wala part sort krna hai
    mergeSort(arr, mid + 1, e);

    // merge krro sorted arrays ko
    merge(arr, s, e);
}
int main()
{

    int n = 6;
    int arr[n] = {9,4,2,1,5,0};
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}