#include <iostream>
using namespace std;
int main()
{
    int n1, n;
    cin >> n1;
    int **arr = new int *[n1];
    for (int i = 0; i < n1; i++)
    {
        arr[i] = new int[i];
    }
    for (int i = 0; i < n1; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}