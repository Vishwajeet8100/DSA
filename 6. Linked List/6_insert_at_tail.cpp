// insert at the tail, but here we are not creating another tail pointer
// we are just traversing the a new pointer at last (startung from head node) and then adding the new node. 
// so time complexity is o(n).

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
void insert_at_end(node * &head, int data){   // passing by reference is imporatant.
    node * temp = head;    // important to create this temp, or else you will be updating the original pointer, so now pointer will come at last position , and it will give problem while printing as it will print only last two nodes.
    while(temp->next != NULL){
        temp = temp->next;
    }
    node * new_node = new node(data);
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
    node  * first = new node(10);
    insert_at_end(first,20);
    insert_at_end(first ,30);
    insert_at_end(first ,40);
    print(first);
    return 0;
}