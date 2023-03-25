#include<iostream>
using namespace std;
int main(){

int a=4;
//&(Address of)operator
int*b=&a;
cout<<"the address if a is "<<b<<endl;
cout<<"the address of a is "<<&a<<endl;

//*(it will show value )derefrence operator
cout<<"the value of a is "<<*b<<endl;

//pointer to pinter
int**c=&b;


    return 0;
}