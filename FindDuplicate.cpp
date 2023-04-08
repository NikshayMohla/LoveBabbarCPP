#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5,7,6,8,6};

    for (int i = 0; i < 5; i++)
    {
        int start = arr[i];
        for (int j = 0; j < 5; j++)
        {
            if (start = arr[j + 1])
            {
                cout << start<<" ";
                break;
                // return arr[start];
            }
            else
            {

            }
        }
        continue;
    }
}