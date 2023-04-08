#include <iostream>
#include <math.h>
using namespace std;
int num(int arr[], int n, int arrr[], int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    int ans[n];
    while (i <= 0 && j <= 0)
    {
        int val1 = arr[i];
        int val2 = arr[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[i] = sum;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[i] = sum;
        i--;
    }
    while (i != 0)
    {
        int sum = arrr[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[i] = sum;
        i--;
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr1[2] = {9, 9};
    num(arr, 4, arr1, 2);
}