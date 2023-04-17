//STATIC DATA MEMBER

#include<iostream>
using namespace std;
class demo{
    int x,y;
    static int z;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
        z=z+1;
    }
    void putdata(){
cout<<" x= "<<x<< " y = " <<y<<" z= "<<z<<endl;

    }
};
int demo::z;
int main(){
demo aa,bb;
aa.getdata(5,10);
bb.getdata(30,10);
aa.putdata();
bb.putdata();


    return 0;
}