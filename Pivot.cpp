#include <iostream>
using namespace std;
int sum(int arr[], int k, int m)
{
    int sumo = 0;
    for (int i = k; i < m; i++)
    {
        sumo = sumo + arr[i];
    }
    return sumo;
}
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (mid <= e)
    {
        if (sum(arr, 0, mid) == sum(arr, mid, e))
        {
            return mid;
        }
        else if (sum(arr, 0, mid) < sum(arr, mid, e))
        {
            mid = mid - 1;
        }
        else if (sum(arr, 0, mid) > sum(arr, mid, e))
        {
            mid = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[3]={0,1,0};
    cout<<pivot(arr,3);
}