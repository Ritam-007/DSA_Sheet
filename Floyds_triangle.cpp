#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cout<<"Enter a value :";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}