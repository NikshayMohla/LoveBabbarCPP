#include <iostream>
using namespace std;
void reverse(string &s, int i, int j, int n)
{
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    // cout << s << endl;
    reverse(s, i, j, n - 1);
}
int main()
{
    string s = "NIKSHAY";
    reverse(s, 0, 6, 7);
    cout << s << endl;
}