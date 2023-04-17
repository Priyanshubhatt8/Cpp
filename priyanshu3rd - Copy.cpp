//else if conditions
#include<iostream>
using namespace std;
int main(){

int savings;
cin>>savings;
if(savings>5000){
    cout<<"going with akriti ";
    if(savings>10000){
        cout<<"going to watch movie";
    }else{
        cout<<"going to shopping";
    }
    
    
}
else if(savings>2000){
    cout<<"going with anushka";
}
else{
  cout<<"going with friends";
}



    return 0;
}