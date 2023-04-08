#include <iostream>
using namespace std;
bool isprime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << isprime(7);
}