#include <iostream>
#include <string>
using namespace std;
char maxOccurance(string s, int count)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int num = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            num = s[i] - 'a';
        }
        arr[num]++;
    }
    int max = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ans = i;
        }
    }
    char fans = 'a' + ans;
    return fans;
}
int main()
{
    string s;
    getline(cin, s);
    int count = s.length();
    cout << maxOccurance(s, count);
    // cout << count << endl;
    // cout << reverseName(s, count) << endl;
}