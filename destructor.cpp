#include<iostream>
using namespace std;
int count=0;
class demo{
  public:
  demo(){
      count++;
      cout<<"the value after add is "<<count<<endl;
  }  
  ~demo(){
      count--;
      cout<<"the value after delete is "<<count<<endl;
  }
};
int main(){
demo aa;
demo bb;
demo cc;
demo dd;




    return 0;
}