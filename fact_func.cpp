#include<iostream>
using namespace std;
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int a;
    cout<<"Enter a value    :";
    cin>>a;
    cout<<"Factorial of the value is :"<<fact(a);
    return 0;
}