#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n = 5, target;
    cin >> target;
    vector<int> vec(n);
    ;
    // vector<int> vec2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout >> vec[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec2[i];
    // }
    cout << binary_search(vec.begin(), vec.end(), target);
}
