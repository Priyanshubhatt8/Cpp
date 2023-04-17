#include<iostream>
using namespace std;
class a{
    protected:
    int x;
    public:
    void input(){
     cout<<"enter your number "<<endl;
     cin>>x;
    }
};
class b:public a{
int y;
public:
void getdata(){
    cout<<"enter your second number"<<endl;
    cin>>y;
    }
    void putdata(){
        cout<<"addition="<<x+y<<endl;

    }
};
int main(){//we can only create object of derived class here derived class is B derived(child class)
b aa;
aa.input();
aa.getdata();
aa.putdata();






    return 0;
}