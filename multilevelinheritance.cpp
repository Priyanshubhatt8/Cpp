#include<iostream>
using namespace std;
class A{
    protected:
int roll;
public:
void getrollno(){
    cout<<"enter roll no"<<endl;
    cin>>roll;
}
void putrollno(){
    cout<<"rollno= "<<roll<<endl;
}
};
class b:public A{
    protected:
int sub1,sub2;
public:
void getmarks(){
    cout<<"enter your 2sub marks"<<endl;
    cin>>sub1>>sub2;
}
void putmarks(){
    cout<<"1marks= "<<sub1<< "2nd marks= "<<sub2<<endl;
}

};
class c:public b{
    protected:
    int sptr;
    public:
    void getsptrn(){
        cout<<"enter sptr number"<<endl;
        cin>>sptr;
    }
    void total(){
        void putrollno();
        void putmarks();
        cout<<"total="<<sub1+sub2+sptr<<endl;
    }
};
int main(){
c aa;
aa.getrollno();
aa.getmarks();
aa.getsptrn();
aa.total();



    return 0;
}