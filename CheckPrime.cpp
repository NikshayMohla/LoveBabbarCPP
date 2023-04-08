#include <iostream>
using namespace std;
int main()
{
    int i, n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout<<"Non Prime"<<endl;
        }
    }
}