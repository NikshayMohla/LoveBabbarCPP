#include <iostream>
using namespace std;
int firstIndex(int *input, int size, int x)
{
        if(size==0){
        return -1;
    }
    if(input[size-1]==x)
    {
        return (size-1);
    }
    else
    {
        int ans=firstIndex((input+(size-1))-1,size-1,x);
        return ans;
    }
    // return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[5] = {2, 3, 4, 5, 6};
    int key = 61;
    cout << firstIndex(arr, n, key);
}