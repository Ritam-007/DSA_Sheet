#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter a value    :";
    cin>>n;
    for(i=n;i>=1;i--){
        for(k=0;k<n-i;k++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}