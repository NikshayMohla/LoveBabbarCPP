#include <iostream>
using namespace std;
bool validChar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char ch[], int count)
{
    int s = 0;
    int e = count - 1;
    while (s <= e)
    {
        if (validChar(tolower(ch[s])) != validChar(tolower(ch[e])))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char ch[20];
    cin >> ch;
    int count = getLength(ch);
    cout << checkPalindrome(ch, count);
}