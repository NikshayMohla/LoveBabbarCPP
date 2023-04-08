#include <iostream>
using namespace std;
void reverseName(char name[], int count)
{
    int s = 0;
    int e = count - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
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
int main()
{
    char name[20];
    cin.getline(name,20);
    int count = getLength(name);
    // cout << count;
    reverseName(name, count);
    cout << name;
}