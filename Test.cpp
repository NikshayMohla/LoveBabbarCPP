#include <iostream>
using namespace std;
int geek(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = geek(n - 1) + geek(n - 2) + geek(n - 3);
    return ans;
}
int main()
{
    // code
    int t;
    cin >> t;
    int n;
    cin >> n;
    while (t--)
    {
        cout << geek(n) << endl;
    }
}