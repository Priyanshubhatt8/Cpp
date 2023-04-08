#include <iostream>
using namespace std;
int add(void);
int main(){
int sum;
sum=add();
cout<<sum;


    return 0;
}
int add(void){
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    return c;
    
}