#include <iostream>
using namespace std;
int fact(int z)
{
    int prod = 1;
    for (int i = 1; i <= z; i++)
    {
        prod = prod * i;
    }
    return prod;
}
int main()
{
    int n, r;
    cin >> n >> r;
    // cout << fact(n);
    // fact(r);
    // fact(n - r);
    int ncr;
    ncr = fact(n) / fact(r) * fact(n - r);
    cout << ncr << endl;
}