#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
union money m1;
m1.rice=22;
cout<<m1.rice<<endl;
m1.car='t';
cout<<m1.car<<endl;



    return 0;
}