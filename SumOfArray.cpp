#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    for (int x : arr)
    {
        sum = x + sum;
    }
    cout << sum << endl;
}