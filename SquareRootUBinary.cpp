#include <iostream>
using namespace std;
int binary(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    // int ans = -1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int x = mid * mid;
        if (x == n)
        {
            return mid;
        }
        else if (x > n)
        {
            e = mid - 1;
        }
        else if (x < n)
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n = 37;
    cout << binary(n) << endl;
    // cout << "ENTER THE NUMBER OF ELEMENTS" << endl;
    // cin >> n;
}