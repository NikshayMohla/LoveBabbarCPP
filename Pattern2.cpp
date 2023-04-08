#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    float n;
    float sum;
    int x; // n is salary m is amount to be withdrawn
    cin >> x >> n;
    if (n > x)
    {
        if (x % 5 == 0)
        {
            n = n - x - (0.50);
            cout << fixed << setprecision(2) << n << endl;
        }
        else
        {
            cout << fixed << setprecision(2) << n << endl;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << n << endl;
    }

    return 0;
}
