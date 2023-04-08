#include <iostream>
using namespace std;
int binaryfirst(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}
int binarylast(int arr[], int n, int key)
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
            // s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {4,6,7,8,9,10};
    int key;
    cin >> key;
    cout <<binaryfirst(arr,6,key) << endl;
    // cout << "last" << binarylast(arr, 8, key) << endl;
}