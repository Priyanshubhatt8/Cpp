#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int reverse=0;
for(int i=0;i<n;i++){
    reverse=(reverse*10)+n%10;
    n=n/10;
   
} cout<<reverse<<endl;




    return 0;
}