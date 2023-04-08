#include <iostream>
using namespace std;
int main()
{
    int n, rem;
    cin >> n;
    while (rem > 0)
    {
        rem = n % 10;
        // if(rem=0){
        //     continue;
        // }
        n = n / 10;
        cout << rem << endl;
    }
}