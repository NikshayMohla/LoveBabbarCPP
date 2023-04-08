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
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS IN ARRAY" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "ENTER THE KEY" << endl;
    cin >> key;
    cout << "THE INDEX OF THE ELEMENT IS " << binary(arr, 6, key) << endl;
    // cout << "last" << binarylast(arr, 8, key) << endl;
}