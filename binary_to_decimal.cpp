#include<iostream>
using namespace std;
int convert(int a){
    int x=1,y,ans=0;
    while(a>0){
        y=a%10;
        ans=ans+(x*y);
        x=x*2;
        a=a/10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a value    :";
    cin>>n;
    cout<<"Answer is = "<<convert(n);
    return 0;
}