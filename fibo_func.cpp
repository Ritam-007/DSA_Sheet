#include<iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1,i,c;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}

int main(){
    int range;
    cout<<"Enter a range    :";
    cin>>range;
    fibo(range);
}