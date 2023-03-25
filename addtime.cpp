#include<iostream>
using namespace std;
class time{
    int h,m;
    public:
    void setdata(void){
        cout<<"Enter you hour and time";
        cin>>h>>m;
    }
    void getdata(void){
        cout<<"hours= "<<h<<endl;
        cout<<"time= "<<m<<endl;
    }
    void sum(time t1,time t2){
        h=(t1.m+t2.m)/60;
        m=(t1.m+t2.m)%60;
        h=h+(t1.h+t2.h);
        
    }
};
int main(){
time t1,t2,t3;
t1.setdata();
t1.getdata();t2.getdata();
t3.sum(t1,t2);



    return 0;
}