#include<iostream>
;using namespace std;
int main(){

int n;
cin>>n;
bool isprime=1;
for(int i=2;i<n;i++){
    if(n%i==0){
 isprime=0;
 break;
    }
}

if(isprime==0){
    cout<<"IS not a prime number"<<endl;
}
else{
    cout<<"prime number"<<endl;
}
    return 0;

}