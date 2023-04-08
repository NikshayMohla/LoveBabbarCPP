#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp = INT32_MIN;
    int min=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
        // else
        // {
        //     continue;
        // }
    }
    cout << temp;
} 