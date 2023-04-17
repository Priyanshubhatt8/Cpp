#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"this is base class"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"this is derived class"<<endl;
        A::display();
    }
};  
int main(){
B aa;
aa.display();





    return 0;
}