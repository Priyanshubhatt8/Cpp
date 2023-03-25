#include<iostream>
using namespace std;

int add(int a,int b){
    int c=a+b;
    return c;
}
//Swap //this will not swap the number because it give the copt of values not original values hence we are not returning any thing
void swap(int a,int b){
int temp=a;
a=b;
b=temp;

}
//by pointer method we can swap two numbers
void swappointer(int*a,int*b){
    int temp=*a;
    *a=*b;
     *b=temp;
}
//using refrence variable
void swaprefrence(int &a,int &b ){
int temp=a;
a=b;
b=temp;
}

int main(){
    int a=4,b=7;
cout<<"the value of a is "<<a<<" the valuue of b is "<<b<<endl;
//swappointer(&a,&b);//tthis will swap a and b by using pointer reference
swaprefrence(a,b); //this will swap  a and b by using refrence variable
cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;



    return 0;
}