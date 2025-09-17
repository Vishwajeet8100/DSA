#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data ;
    node * next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void insert_at_first(node * &head,int data){   // passing by refernece is important here
    node * new_node = new node(data);
    new_node->next = head;
    head = new_node;
}

void print(node * head){
    
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

int main()
{
    node * head = new node(10);
    insert_at_first(head,20);
    insert_at_first(head,30);
    insert_at_first(head,40);
    insert_at_first(head,50);
    insert_at_first(head,60);
    print(head);
    return 0;
}