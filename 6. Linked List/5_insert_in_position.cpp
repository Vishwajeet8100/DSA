// insert in position ,  done by me, sir has taught it later but a little bit complex, this is easy way of doing it.


//but here we have not handled the edge cases as the code will not work for head and tail insertion, as head and tail pointers will not be updated after insertion.

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
void insert_at_tail(int data, node * &head, node* &tail){
    node * new_node = new node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }else{
        tail->next = new_node;
        tail = new_node;
    }
}
// this is the fucntion to insert at a position.
void insert_at_position(int pos, int data, node * head){
    
    int i = 1;
    node * temp = head;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    node * new_node = new node(data);
    new_node->next = temp->next;
    temp->next = new_node;
}
void print(node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    // cout<<"Hello world"<<endl;
    node * head = NULL;
    node * tail = NULL;
    insert_at_tail(10,head,tail);
    insert_at_tail(20,head,tail);
    insert_at_position(1,2,head);
    print(head);

    return 0;
}