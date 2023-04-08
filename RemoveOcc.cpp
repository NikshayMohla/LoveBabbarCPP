#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "abchishabc";
    string key = "abc";
    int i = str.rfind(key);
    cout << i;
    return 0;
}