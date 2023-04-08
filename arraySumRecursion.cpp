#include <iostream>
using namespace std;
int Sum(int *arr, int n)
{
    // base case
    if (n == 1)
    {
        return arr[0];
    }
    int sum = arr[n - 1] + Sum(arr, n - 1);
    return sum;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    cout << Sum(arr, 5);
}