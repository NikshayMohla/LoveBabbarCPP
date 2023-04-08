#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int low = arr[0];
    int high = arr[9];
    int key, mid;
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << "found" << endl;
            return 0;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Not Found";
    return 0;
}