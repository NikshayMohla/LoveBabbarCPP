#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    // int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    // int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int even[6] = {1, 2, 2, 3, 3, 5};
    // int odd[5] = {2, 3, 4, 5, 6};

    cout << "First occurance of 6 is at index " << firstocc(even, 6, 3) << endl;
    cout << "Last occurance of 6 is at index " << lastocc(even, 6, 3) << endl;

    return 0;
}