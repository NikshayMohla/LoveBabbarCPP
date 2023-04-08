#include <iostream>
using namespace std;
int binary(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
            // ans = mid;
            // e = mid - 1;
        }
        else if (key > arr[mid])
        {
            e = mid - 1;
        }
        else if (key < arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[8] = {10,9,7,5,4,3,2,1};
    int key=1;
    // cin >> key;
    cout << binary(arr, 8, key) << endl;
    // cout << "last" << binarylast(arr, 8, key) << endl;
}