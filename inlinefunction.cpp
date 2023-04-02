#include<iostream>
using namespace std;
inline int square(int a){
return a*a;
}
inline int cube(int a){
return a*a*a;
}
int main(){
int x=4;

cout<<square(x)<<endl;
cout<<cube(6)<<endl;


return 0;
}