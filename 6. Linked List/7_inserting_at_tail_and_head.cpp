// now we will creat a fucntion to insert at tail and head by having two pointers head and tail.


#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_head(int data, node *  &head, node * &tail){
    node * new_node = new node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
    }else{
        new_node->next = head;
        head = new_node;          //head need to be changed.
    }
}
void insert_at_tail(int data, node *  &head, node * &tail){
    node * new_node = new node(data);
    if(tail == NULL){
        head = new_node;
        tail = new_node;
    }else{
        tail->next = new_node;
        tail = new_node;           // tail needs to be changed
    }
}
void print( node * head){
   while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
   }
}
int main()
{
    node * head = NULL;

    node * tail = NULL;

    insert_at_head(10,head,tail);
    insert_at_tail(20,head,tail);
    insert_at_head(0,head,tail);

    print(head);
    return 0;
}