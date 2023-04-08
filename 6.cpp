#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <=  n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int z = n - (i);
            while (z <= n)
            {
                cout << " ";
            }
            count++;
            z--;
        }
        cout << endl;
    }
}