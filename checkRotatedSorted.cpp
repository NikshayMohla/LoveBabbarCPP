#include <iostream>
using namespace std;
int main()
{
    bool sort = true;
    int n = 5;
    int count = 0;
    int arr[5] = {4, 0, 1, 2, 3};
    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
        if (arr[n - 1] > arr[0])
        {
            count++;
        }
    }
    
}
