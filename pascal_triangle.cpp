#include<iostream>
using namespace std;

int fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact *=i;
    }
    return fact;
}


int pascal(int a,int b){
    int c= fact(a)/(fact(b)*fact(a-b));
    return c;
}
int main(){
    int range,i,j;
    cout<<"Enter a valeu as range :";
    cin>>range;
    for(i=0;i<=range-1;i++){
        for(j=0;j<=i;j++){
            cout<<pascal(i,j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
