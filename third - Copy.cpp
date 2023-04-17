#include<iostream>
using namespace std;
int main(){
int a=6 , b=8;
//Arithmetic operators
cout<<"the value of a+b is "<<a+b <<endl;
cout<<"the value of a%b: "<<a%b <<endl;
cout<<"the value of a*b: "<<a*b <<endl;
cout<<"the value of a-b: "<<a-b <<endl;
cout<<"the value of a/b: "<<a/b <<endl;
cout<<"the value of a++: "<<a++ <<endl;
cout<<"the value of a--: "<<a-- <<endl;
cout<<"the value of ++a: "<<++a <<endl;
cout<<"the value of --a: "<<--a <<endl;
cout<<endl;

//Assignment operators used to assign value to variable
//a=7,b=98; //(=)is assignment operator


//Comparison operator
 cout<<"Following are the comparison operators in C++"<<endl;
 cout<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

// Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


    return 0;
}