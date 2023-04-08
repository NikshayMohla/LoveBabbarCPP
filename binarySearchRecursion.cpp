#include <iostream>
using namespace std;
bool binary(int *arr, int n, int key)
{
    if (n < 0)
    {
        return 0;
    }
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return 1;
    }
    if (arr[mid] < key)
    {
        return binary(arr + (mid + 1), n - (mid + 1), key);
    }
    else
    {
        return binary(arr, n - (mid + 1), key);
    }
}
int main()
{
    int arr[6] = {2, 4, 5, 6, 9, 56};
    cout << binary(arr, 5, 56);
}