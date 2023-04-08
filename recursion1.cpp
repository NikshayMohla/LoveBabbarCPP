#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void printDigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    printDigit(n, arr);
    cout << arr[digit] << " ";
}
int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = fibbonacci(n - 1) + fibbonacci(n - 2);
    return ans;
}
void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    counting(n - 1);
}
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int powere = power(n - 1);
    int powe = 2 * powere;
    return powe;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = factorial(n - 1);
    int facto = n * fact;

    return facto;
}
int main()
{
    int n = 243;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // cout << factorial(n) << endl;
    // cout << power(n) << endl;
    // counting(n);
    // cout << endl;
    // cout << fibbonacci(n)<<endl;
    printDigit(n, arr);
}