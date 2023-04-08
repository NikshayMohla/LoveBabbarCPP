#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7, 78, 43, 55, 99};
    int max = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}