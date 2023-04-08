#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prod = 1, sum = 0;

    while (n > 0)
    {
        int rem;
        rem = n % 10;
        prod = prod * rem;
        sum = sum + rem;
        n = n / 10;
    }
    int sum = 0;
    while (n > 0)
    {
        int rem;
        rem = n % 10;
        n = n / 10;
    }
    cout << sum << endl;
    // cout << prod - sum << endl;
}