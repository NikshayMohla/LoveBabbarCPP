#include <iostream>
using namespace std;
bool permutation(string s1, string s2)
{
    int arr[26] = {0};
    int num = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        num = s2[i] - 'a';
        arr[num]++;
    } 
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.compare(i, s1.length(), arr) == true)
        {
            return true;
        }
    }
    return false;
}
int main()
{
}