#include <iostream>
using namespace std;
bool palindrome(string &s, int i, int j)
{
    if (i > j)
    {
        return 1;
    }
    if (s[i] != s[j])
    {
        return 0;
    }
    else
    {
        return palindrome(s, i + 1, j - 1);
    }
    // return 0;
}
int main()
{
    string s = "abpba";
    cout << palindrome(s, 0, 4);
}