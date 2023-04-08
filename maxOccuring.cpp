#include <iostream>
#include <string>
using namespace std;
char maxOccur(string arr, int count)
{
    int arr[26] = {0};
    int num = 0;
    for (int i = 0; i < arr.length(); i++)
    {
        int num = arr[i] - 'a';
    }
    arr[num]++;
    int max = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[max] > i)
        {
            max = arr[i];
            ans = i;
        }
    }
    char finAns = 'a' + ans;
    return finAns;
}
int main()
{
    
}