#include <iostream>
using namespace std;

#define max(a, b) (((b*a) < (a)) ? (b) : (a))
int main()
{
    cout << max(10, 20);
}