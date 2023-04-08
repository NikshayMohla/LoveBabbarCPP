#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int stuCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum - arr[i] >= mid)
        {
            pageSum -= arr[i];
        }
        else
        {
            stuCount++;
            if (stuCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (stuCount > m)
        {
            return false;
        }
    }
    return true;
}
int binary(int arr[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int ans = -1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
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
    int n = 5;
    int arr[] = {1,2,3,4,6};
    cout << binary(arr, n, 2);
}