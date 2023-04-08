#include <iostream>
#include <math.h>
using namespace std;
int power(int x, int y)
{
    int rr = pow(x,y);
    return rr;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
}