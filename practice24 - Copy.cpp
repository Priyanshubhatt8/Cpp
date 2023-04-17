#include<iostream>
using namespace std;
class bhatt{
int a,b;
public:
void  getdata(void){
cout<<"rnter the number"<<endl;
cin>>a>>b;
}
void setdata (void){
    cout<<"the sum is"<<endl;
    cout<<a+b;
}
};
int main(){
bhatt aa;
aa.getdata();
aa.setdata();




    return 0;
}