#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int x){
        a=x;
    }
    void display(){
        cout<<"A="<<a<<endl;
    }
};
class B{
    protected:
    int b;
    public:
    B(int y){
        b=y;
    }
        void putdata(){
            cout<<"b="<<b<<endl;
        
    }
};
class C:public A,public B{
    int c;
    public:
    c(int p,int q,int r):a(q),b(r);
    {
        c=p;
    }
    void show(){
        cout<<"c="<<c<<endl;
    }
};
int main(){
C aa(10,20,30);
aa.display();
aa.putdata();
aa.show();





    return 0;
}