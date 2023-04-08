#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m, rem;
    cin >> n;
    int sum = 0;
    m=n;
    while (rem > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (sum == m)
    {
        cout << "ARMSTRONG PKC" << endl;
    }
    else
    {
        cout << "SEXSUXX";
    }
    return 0;
}