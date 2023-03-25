#include<iostream>
using namespace std;
class animal
{
    private:
    int height,length,weight;
    public:
    string name,color;
    void setdata(int age,int shadow, int love);
    void getdata(){
    cout<<"The height of animal is "<<height<<endl;
    cout<<" THe length of animal is "<<length<<endl;
    cout<<"the weight of animal is "<<weight<<endl;
    cout<<"the name of animal is "<<name<<endl;
    cout<<" the color of animal is "<<color<<endl;
    }
};
void animal :: setdata(int age,int shadow,int love){
    height=age;
    length=shadow;
    weight=love;
}
int main(){
animal akash;
akash.name="donkey";
akash.color="black";
akash.setdata(18,3,5);
akash.getdata();




    return 0;
}