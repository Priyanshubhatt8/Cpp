#include<iostream>
using namespace std;
class demo{
int a,b;
public:
demo(){
    a=10;    
    }
    demo(demo&z){
        a=z.a;
    }
    void putdata(){
        cout<<" a "<<a;
    }
};
int main(){
demo aa;
demo bb(aa);
demo cc(bb);
aa.putdata();
bb.putdata();
cc.putdata();
    return 0;
}