#include <iostream>
using namespace std;
int main()
{
  int k = 1, n = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  int temp[5] = {0};
  for (int i = 0; i < n; i++)
  {
    temp[(i + k) % n] = arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] = temp[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
