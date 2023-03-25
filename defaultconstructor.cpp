#include<iostream>
using namespace std;
class demo{
int a,b,c;
public:
//default constructor
demo(){
    a=10;
    b=20;
    c=a+b;
}
void putdata(){
    cout<<" a=" <<a<< " b="<<b<<" a+b="<<c<<endl;;
}
};
int main(){
    demo aa;
    aa.putdata();
    demo bb;
    bb.putdata();






    return 0;
}