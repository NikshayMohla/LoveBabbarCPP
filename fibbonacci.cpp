#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    while (k <= 0)
    {
        k = n % 10;
        cout << k << endl;
        n = k;
        
    }
}