#include<iostream>
using namespace std;
class A{
public:
virtual void show(){
    cout<<"base clas "<<endl;
}
};
class B:public A{
    public:
    void show(){
        cout<<"derived class"<<endl;
    }
};
int main(){

A*bptr;
B aa;
bptr=&aa;
bptr->show();


    return 0;
}