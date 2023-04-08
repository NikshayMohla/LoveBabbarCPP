#include <iostream>
using namespace std;

/*program for draw another pattern 2 using nested for loop

*/
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << " ";
            else
                cout << " *";
        }
        cout << endl;
    }
    return 0;
}