// very easy man did it by myself
// use just little brain, thats it.


#include <iostream>
#include <algorithm>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;       // adddtional this field is added.
    }

    ~node(){
        cout<<"Node with data -> "<<this->data<<" is deleted."<<endl;
    }
};

int len (node * head){       // its necessary not to take head by reference while calculating the length as we dont to move our real head.
    int count = 0;
    while(head != NULL ){
        head = head -> next;
        count++;
    }
    return count;
}

void insert_at_head(int data, node *&head, node *&tail)
{
    node *new_node = new node(data);
    if (head == NULL )
    {
        head = new_node;
        tail = new_node;
    }
    else
    { 
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_tail(int data, node *&head, node *&tail)
{
    node *new_node = new node(data);
    if (head == NULL )
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void insert_at_position(int pos, int data , node * & head, node * & tail){
    
    if(pos == 0){                                    // handling edge case , adding at first position .
        insert_at_head(data, head, tail);
        return;
    }

    int length = len(head);                     // handling edge case , adding at last position
    if(pos == length){
        insert_at_tail(data, head, tail);
        return;
    }
    
    int i = 1 ;
    node * temp = head;
    while( i < pos){
        temp = temp->next;
        i++;
    }
    node * new_node = new node(data);
    new_node -> next = temp->next;
    (temp -> next)->prev = new_node;
    temp->next = new_node;
    new_node ->prev = temp;
}


void print_from_tail(node *tail)
{
    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout<<endl;
}

void print_from_head(node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void delete_node(int pos, node * & head, node * & tail){
    
    // if ll is empty.
    if(head == NULL){
        cout<<" Nothing to delete in the linked list. ";
        return;
    }
    
    
    // deleting the node at first position.
    // we are using 1 based indexing for deleting.
    if(pos == 1){
        node * temp = head;
        head = head -> next;
        temp->next = NULL;
        head -> prev = NULL;
        delete temp;
        return;
    }

    // deleting the node at last postion.
    int length = len(head);
    if(pos == length){
        node * temp2 = tail;
        tail = tail -> prev;
        tail->next = NULL;
        temp2 -> prev = NULL;
        delete temp2;   
        return;
    }
    
    // deleting the node at any position.
    int i = 1 ;
    node * temp3 = head;
    while(i < pos){
        temp3 =  temp3->next;
        i++;
    }
    (temp3->prev)->next = (temp3->next);
    (temp3 ->next)->prev = (temp3->prev);
    temp3->prev = NULL;
    temp3->next = NULL;
    delete temp3;

}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insert_at_tail(10,head,tail);
    insert_at_tail(20,head,tail); 
    insert_at_tail(30,head,tail); 

    insert_at_head(4,head,tail);
    insert_at_head(5,head,tail);

    
    insert_at_position(0,101,head,tail);     // adding at 0th position. i.e before head (we are adding according to the 0 based indexing).
    insert_at_position(6,101,head,tail);     // adding at 6th position  i.e after tail . (we are adding according to the 0 based indexing).

 
    
    cout<<" Printing from the head : ";     // this is what we usually do, printing from head.
    print_from_head(head);
    
    
    cout<<" Printing from the tail : ";
    print_from_tail(tail);
    cout<<endl;

    delete_node(5,head,tail);
    cout<<" After deletion the list is : ";
    print_from_head(head);

    
    
    return 0;
}