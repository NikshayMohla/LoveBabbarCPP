#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (a % i != 0)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}
