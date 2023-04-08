#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 4, 10, 9, 11};
    cout << isSorted(arr, 5);
}