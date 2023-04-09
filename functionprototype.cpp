#include<iostream>
using namespace std;
//function prototype
int sum(int num1,int num2);

//void g(void);//void likhna jaruri nhi hota
void g();// aise bhi likh sakthe hai

int main(){

int a,b;
cin>>a>>b;
//a and b are actual parameters
cout<<"the sum is :"<<sum(a,b);
g();




    return 0;
}
//here num1 and num2 will be taking values from actual parameters a and b
//a and be are formal parameters
int sum(int num1,int num2){
    int c=num1+num2;
    return c;
}
void g(){
    cout<<"\n Hello, Good morning";
}