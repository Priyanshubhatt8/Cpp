#include<iostream>
using namespace std;
int main(){
int n,m,k;
cin>>n>>m>>k;
if(n>m){
    if(k>m){
        cout<<"you can eat bread"<<endl;
        if(k<n){
    cout<<"bread is expired"<<endl;
    }
}
}
else if(k>n){
    cout<<"bread is expired";
}




    return 0;
}