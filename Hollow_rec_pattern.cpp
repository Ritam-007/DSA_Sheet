/*#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter rows and columns :";
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}*/

#include<iostream>
using namespace std;
int pattern(int r,int c);
int main(){
    int r,c;
    cout<<"Enter rows and cols :";
    cin>>r>>c;
    pattern(r,c);
}

int pattern(int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}