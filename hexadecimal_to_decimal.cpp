#include<bits/stdc++.h>
using namespace std;
int convert( string s){
    int ans=0;
    int x=1;
    int length=s.size();
    for(int i=length-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans=ans+(x*(s[i]-'0'));
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans=ans+(x*((s[i]-'A')+10));
        }
        x=x*16;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter a value    :";
    cin>>n;
    cout<<convert(n)<<endl;
}
