#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= 9; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    return 0;
}