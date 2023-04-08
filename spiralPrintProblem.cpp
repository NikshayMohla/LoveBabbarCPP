#include <iostream>
using namespace std;
void spiral(int arr[][3])
{
    int count = 0, endCol = 2, endRow = 2, stRow = 0, stCol = 0, total = 3 * 3;
    while (count < total)
    {
        for (int i = stCol; count < total && i < endCol; i++)
        {
            cout << arr[stRow][i] << " ";
            count++;
        }
        for (int i = stRow; count < total && i < endRow; i++)
        {
            cout << arr[i][endRow] << " ";
            count++;
        }
        for (int i = endCol; count < total && i > stCol; i--)
        {
            cout << arr[endRow][i] << " ";
            count++;
        }
        for (int i = endRow; count < total && i > stRow; i--)
        {
            cout << arr[i][stCol] << " ";
            count++;
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    spiral(arr);
}