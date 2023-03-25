#include <iostream>
#include <string>
using namespace std;
class binary
{
    private:
    string s;

public:
    void read(void);
    void checkbinary(void);
    void ones(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter your binary number" << endl;
    ;
    cin >> s;
}
void binary::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary number"<<endl;
        }break;
    }
}

void binary::ones(void)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary a;
    a.read();
    a.checkbinary();
    a.display();
    a.ones();
    a.display();

    return 0;
}