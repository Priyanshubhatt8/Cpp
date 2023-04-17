#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i =0;i<=n;i++){
    for(int j=0;j<=n-i;j++){
        cout<<" ";
    }
    for(int c=0;c<=n;c++){
        cout<<"*";
    }cout<<endl;
}cout<<endl;



    return 0;
}