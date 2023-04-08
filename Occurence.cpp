#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int binarySearchLast(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    // int n;
    // cin>>n;

    // int arr[10]={6,8,13,17,20,22,25,28,30,35};
    int arr[5] = {5, 7, 8, 7, 15};
    int key;
    cin >> key;
    cout << binarySearch(arr, 5, key) << endl;
    cout << binarySearchLast(arr, 5, key);
}