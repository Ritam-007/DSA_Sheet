#include<iostream>
using namespace std;
int convert(int a){
    int x=1,ans=0,y;
    while(a>0){
        y=a%10;
        ans+=(x*y);
        x=(x*8);
        a/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a octal value  :";
    cin>>n;
    cout<<"Answer is = "<<convert(n);
    return 0;
}