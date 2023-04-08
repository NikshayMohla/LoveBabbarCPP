#include <iostream>
using namespace std;
int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char palin[20];
    cout << "Enter the string : ";
    cin >> palin;
    int n = getLength(palin);
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (palin[s++] == palin[e--])
        {
            cout << "palin" << s << e;
        }
        else
        {
            cout << "not palin";
        }
    }
    return 0;
}