#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}