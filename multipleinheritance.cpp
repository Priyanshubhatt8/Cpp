#include<iostream>
using namespace std;
class A{
  protected:
  int a;
  public:
  void input(){
      cout<<"enter your number"<<endl;
      cin>>a;
  }  
  };
  class B{
protected:
int b;
public:
void getdata(){
    cout<<"enter your second number"<<endl;
    cin>>b;
}
  };
  class C:public A, public B{
    public:
    void addition(){
        cout<<"addition="<<a+b<<endl;
    }
  };
int main(){
C aa;
aa.input();
aa.getdata();
aa.addition();



    return 0;
}