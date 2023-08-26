#include<iostream>
using namespace std;
int isPrime(int x){
    int j;
    int flag=0;
        for(j=2;j<x;j++){
            if(x%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<x<<" ";
        }
    return 0;
}



int main(){
    int a,b,i;
    cout<<"Enter a range    :";
    cin>>a>>b;
    for(i=a;i<=b;i++){
        
            isPrime(i);
        
    }
    return 0;
    
}