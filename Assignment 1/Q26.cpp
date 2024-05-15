#include<bits/stdc++.h>
using namespace std;
int Fib(int n){
    if(n<=1){
     return n;   
    } 
    return Fib(n-1)+Fib(n-2);
}
int main(){
    int n;
    cout<<"Enter a Number\n";
    cin>>n;
    for(int i =0;i<=n;i++){
        cout<<Fib(i);
    }
    return 0;
}