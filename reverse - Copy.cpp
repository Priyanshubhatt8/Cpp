#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    int reverse=0;
for(int i=0;i<=n;i++){
    reverse=(reverse*10)+n%10;
    n=n/10;
   

}cout<<"number after reverse"<<endl;
cout<<reverse<<endl;






    return 0;
}