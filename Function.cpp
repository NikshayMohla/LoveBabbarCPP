#include <iostream>
using namespace std;
void prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << "prime" << endl;
        }
        else
            cout << "UnPrime Xd" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    prime(n);
}