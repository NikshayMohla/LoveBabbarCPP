#include <iostream>
using namespace std;
bool binary2(int arr[][3], int target)
{
    int s = 0;
    int e = 2;
    while (s < 3 && e >= 0)
    {
        int element = arr[s][e];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    return 0;
}
bool binary(int arr[][3], int target)
{
    int s = 0;
    int e = 3 * 3 - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int element = arr[mid / 3][mid % 3];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {1, 3, 5, 10, 11, 16, 22, 24, 30};
    int arrr[3][3] = {1, 4, 7, 2, 5, 8, 3, 6, 19};
    int key = 19;
    cout << binary(arr, key) << endl;
    cout << binary2(arrr, key);
}