#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = 1;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        while (j <= n)
        {
            cout << count << " ";
            count++;
        }
        j++;
        count = j;
    }
    cout << endl;
}