#include<iostream>
using namespace std;

int fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}


int main(){
    int n,r;
    cout<<"Enter value of 'n' and value of 'r'   :";
    cin>>n>>r;
    cout<<"Ans is :"<<fact(n)/(fact(n-r)*fact(r));
    return 0;    
}