#include<iostream>
using namespace std;
class A{
protected:
int a;
public:
void input(){
    cout<<"enter the value"<<endl;
    cin>>a;
}
void output(){
    cout<<"a="<<a<<endl;
}
};
class B{
protected:
int b;
public:
void input(){
    cout<<"enter the second value"<<endl;
    cin>>b;
}
void putdata(){
    cout<<"b="<<b;
}
};
class C:public A,public B{
    int c;
    public:
    void input(){
        cout<<"enter the value"<<endl;
        cin>>c;
        A::input();
        B::input();
    }void display(){
        cout<<"c="<<c<<endl;
    }
};
int main(){
    C aa;
   aa.input();
   aa.display();
   aa.output();
   aa.putdata();





    return 0;
}