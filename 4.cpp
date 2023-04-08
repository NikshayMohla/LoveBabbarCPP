#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int count;
    for (i = 1; i <= n; i++)
    {
        count = i;
        for (j = 1; j <= n; j++)
        {
            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
        }
        cout << endl;
    }
}