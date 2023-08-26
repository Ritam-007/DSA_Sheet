
//using normal method

/*#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter num of rows and columns :";
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/


//Using function
#include<iostream>
using namespace std;
int pattern(int r,int c);

int main(){
    int r,c;
    cout<<"Enter num of rows and columns :";
    cin>>r>>c;
    pattern(r,c);
    return 0;
}

int pattern(int x,int y){
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}