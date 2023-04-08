#include <iostream>
using namespace std;
int main()
{
    // int n = 5;
    //     int *ptr = 0;
    // int *p = &n;
    //     cout << &n << endl;
    //     n++;
    //     cout << p << endl;
    // cout << *p << endl;
    //     cout << ptr << " " << *ptr;
    // int a[] = {1, 2, 3, 4};
    // cout << *(a) << " " << *(a + 1);
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    cout << "teri " << &arr << endl;
    cout << "ven " << &ptr << endl;
    cout << "ki " << *ptr << endl;
    char *ch = new char;
    ch = "c";
    cout << ch << endl;
}