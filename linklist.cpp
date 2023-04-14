#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertion(Node *&Head, int val)
{
    Node *newNode = new Node(val);
    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
    Node *ptr = Head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newNode;
}

void display(Node *Head)
{
    if (Head == NULL)
    {
        cout << "LL is Empty" << endl;
    }
    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{

    Node *Head = NULL;
    int n,elm;
    cout<<"Enter The Size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter The Element : ";
        cin>>elm;
        
    insertion(Head, elm);
    
    }

    display(Head);


    return 0;
}