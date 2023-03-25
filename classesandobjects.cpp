#include<iostream>
using namespace std;
class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//declaration
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};
void employee :: setData(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;

}
int main(){

employee harry;
harry.d=34;
harry.e=344;
harry.setData(1,2,4);
harry.getData();


    return 0;
}