#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum*10+rem;
        rem=sum;
        n = n / 10;
    }
    cout << sum << endl;
}