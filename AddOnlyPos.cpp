#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    while(n>=0){
        sum+=n;
        cin>>n;
    }
    cout<<sum<<endl;
    return 0;
}