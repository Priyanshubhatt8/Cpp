#include<iostream>
using namespace std;
class demo{
int a,b;
public:
void getdata(void);
friend int sum(demo);
};
    void demo::getdata(void){
        cout<<"Enter your number"<<endl;
        cin>>a>>b;

    }
    int sum(demo aa){
        return(aa.a+aa.b);
    }
int main(){
    demo aa;
    aa.getdata();
    cout<<"addition= "<<sum(aa);



    return 0;
}