#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    if(n<=1) return n;
    return n+Sum(n-1);
}
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<Sum(n);

    return 0;
}