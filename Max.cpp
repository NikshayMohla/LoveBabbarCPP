#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n>>m>>o;
    if(n>>m && n>>o){
        cout<<"n";
    }
    else if (m>>n && m>>o)
    {
        cout<<"m";
    }
    else if (o>>n && o>>m)
    {
        cout<<"o";
    }
    return 0; 
}