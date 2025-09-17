// insert in position ,  also done by me but improved , sir has taught it later but a little bit complex, this is easy way of doing it.

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

int length_ll(node * head){
    int i = 0;
    node * temp = head;
    while(temp != NULL){
        temp = temp->next;
        i++;
    }
    return i;
}

void insert_at_head(int data, node * &head, node* &tail){
    node * new_node = new node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }else{
        new_node->next = head;
        head = new_node;
    }
}

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
void insert_at_position(int pos, int data, node * & head, node * &tail){
    
    // inserting at 0th position i.e. head, call insert at head fucntion.
    if(pos == 0){
        insert_at_head(data,head,tail);
        return;
    }

    // inserting at last position , i.e. tail, we will call the insert at tail fucntion but we will need to know the length of the linked list.
    int length = length_ll(head);
    if(pos >= length){
        insert_at_tail(data,head,tail);
        return;
    }
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
    insert_at_position(2,40,head,tail);
    print(head);
    
    // now we can see that the tail and head is also updating as we update the head and tail.
    cout<<endl;
    cout<<"tail is : "<<tail->data;
    return 0;

}



