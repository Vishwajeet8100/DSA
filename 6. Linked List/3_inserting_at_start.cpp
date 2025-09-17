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
void print(node * head){
        node * temp = head ; 
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

void insert(node * &head,int data){
    node * newnode = new node(data);
    newnode->next = head;
    head = newnode;    // important
}
int main()
{
    node * first = new node(3);
    node * second = new node(4);
    node * third = new node(6);
    node * fifth = new node(7);
    node * fourth = new node (19);

    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    insert(first, 81);
    /*Here you see that the first node will be now pointing to node containing data 81 and not 3, so now we cannot
    access node containing data 3 by name first, if we do second->data  it will give 4, so now only way to access 3 is
    by first->next->next that is by taking reference to the first node */
    print(first);
    
    cout<<endl<<second->data;
       
    return 0;
}