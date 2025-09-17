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
    ~node(){
        cout<<"Node with data "<<this->data<<" is deleted"<<endl;
    }
};

int length(node * head){
    int i = 0 ;
    while (head != NULL){
        i++;
        head = head->next;
    }
    return i;
}

// fucntion to deleet ndoes from a linkedn list.

void del(int key, node * & head, node * & tail){
    
    // if ll is empty.
    if(head == NULL){
        cout<<"Linked list is empty cannot delete"<<endl;
    }

    // deleting a node at first position i.e. head
    if(key == 1){
        node * temp = head ;
        head = head -> next;
        temp->next = NULL;      // not necessary as we are immediately deletng the node but sadfe to do .
        delete temp;
        return;
    }

    // deleting the node at the last position.
    int len = length(head);
    if(key  == len){
        node * prev = head;
        int i = 1;
        while(i < len -1 ){
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        node * temp = tail;
        tail = prev;
        temp->next = NULL;     //not necessary but safe 
        delete temp;    
        return;
    }

    // deleting a node in between
    int i = 1;
    node * prev = head;       // you will need two pointers prev and curr.
    node * curr = head;
    while(i < key-1 ){
        prev= prev->next;
        i++;
    }
    curr = prev->next;  
    cout<<prev->data<<endl;
    cout<<curr->data<<endl;
    
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}
void insert(int data, node* & tail, node * & head){
    node * new_node = new node(data);
    if(tail == NULL){
        tail =  new_node;
        head = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
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
    int key = 30;
    insert(10,tail,head);
    insert(20,tail,head);
    insert(30,tail,head);
    insert(40,tail,head);
    print(head);
    cout<<endl;
    del(2,head,tail);
   

    print(head);
    cout<<endl;
    // cout<<tail->data;
    
    return 0;
}