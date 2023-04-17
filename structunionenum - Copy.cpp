#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char favch;
    float salary;
};

int main(){
    struct employee priyanshu;
    struct employee akash;    
    akash.eid=2;
    akash.favch='t';
    akash.salary=150;
    priyanshu.eid=1;
    priyanshu.favch='c';
    priyanshu.salary=12000000;
    cout<<" priyanshu details"<<endl;
    cout<<"the value is "<<priyanshu.eid<<endl;
    cout<<"the value is "<<priyanshu.favch<<endl;
    cout<<"the value is "<<priyanshu.salary<<endl;

    cout<<" akash details"<<endl;;
     cout<<"the value is "<<akash.eid<<endl;
    cout<<"the value is "<<akash.favch<<endl;
    cout<<"the value is "<<akash.salary<<endl;

    
    




    return 0;
}