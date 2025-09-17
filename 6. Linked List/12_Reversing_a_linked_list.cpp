// reversing a linknedn list.

#include<iostream>
#include<algorithm>
#include<cmath>
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

void print(node * head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insert_tail(int data, node * & head, node * & tail){

    node * new_node = new node(data);
    if(head== NULL){
        head = new_node;
        tail = new_node;
    }
    tail -> next = new_node;
    tail = tail->next;
    
}

void reverse_ll(node * & head){
    
    
    node * prev_ptr = NULL;    // pointer that points to the previous node of current node.

    while(head != NULL){
        node * temp = prev_ptr;     // temp pointer created at each iteration.
        prev_ptr = head;
        head = head -> next;
        prev_ptr-> next = temp;
    }

    head = prev_ptr;    // important as for printing you use head.
    
}
int main()
{
    // revering a linked list;
    node * head = NULL;
    node * tail = NULL;
    insert_tail(10,head,tail);
    insert_tail(20,head,tail);
    insert_tail(30,head,tail);
    insert_tail(40,head,tail);
    
    print(head);
    
    reverse_ll(head);
    
    print(head);

   
    return 0;
}