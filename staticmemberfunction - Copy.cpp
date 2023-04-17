#include<iostream>
using namespace std;
class demo{
int a;
static int b;
public:
void getdata(int x){
    a=x;
    b=b+1;
}
void putdata(){
    cout<<"a ="<<a<<" b ="<<b<<endl;
}
static void abc(){
cout<<"b ="<<b;
}
};
int demo::b;

int main(){
demo aa;
aa.getdata(20);
aa.putdata();
demo::abc();



    return 0;
}