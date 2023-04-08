#include <iostream>
using namespace std;
int RowSum(int arr[][3])
{
    int maxi = INT32_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main()
{
    int arr[3][3] = {7, 0, 7, 8, 5, 1, 4, 9, 2};
    cout << RowSum(arr);
}